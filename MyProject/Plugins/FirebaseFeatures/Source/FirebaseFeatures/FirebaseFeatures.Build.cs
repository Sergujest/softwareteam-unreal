// Copyright Pandores Marketplace 2021. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class FirebaseFeatures : ModuleRules
{
	/**
	 * If we should statically link against firebase C++ SDK debug libraries (Windows only).
	 * Note that it requires a Source Build and to link the build to the Debug CRT.
	 * You would typically add the following line in your Target.cs file:
	 *		bDebugBuildsActuallyUseDebugCRT = true;
	 *		
	 * /!\ Debug Libraries binaries are not included by default anymore. /!\
	 * -> The reason is they are about 1 Go and not commonly used.
	 **/
	static bool bLinkDebugFirebaseLibrary = false;

	/**
	 *	The firebase libraries we statically link. (except for iOS).
	 **/
	string[] FirebaseLibraries = new string[]
	{
		/**
		 * You can comment out libraries here to remove completly a module's code 
		 * in the plugin. Calling a function after doing so will result in a no-op.
		 * 
		 * Here is how you should do to disable AdMob for example:
		 * //"firebase_admob",
		 *
		 * If you get compilation errors after doing so, it means the module
		 * wasn't programmed to be disabled. If you want this functionality,
		 * just send an email to pandores.marketplace@gmail.com with the request.
		 * Also note that some modules depend on others. (i.e. firestore can't be 
		 * used without auth.)
		 **/
		
		"firebase_admob",
		"firebase_analytics",
		"firebase_app",
		"firebase_auth",
		"firebase_database",
		"firebase_dynamic_links",
		"firebase_firestore",
		"firebase_functions",
		"firebase_instance_id",
		"firebase_messaging",
		"firebase_remote_config",
		"firebase_storage",
	};

	/**
	 *  Firebase's frameworks for IOS.
	 **/
	string[] FirebaseFrameworks = new string[]
	{
		"firebase",
		// "firebase_admob",
		"firebase_analytics",
		"firebase_auth",
		"firebase_database",
		"firebase_dynamic_links",
		//"firebase_firestore",
		"firebase_functions",
		"firebase_instance_id",
		"firebase_messaging",
		"firebase_remote_config",
		"firebase_storage",
	};

	string FirebaseSdkRoot;

	public FirebaseFeatures(ReadOnlyTargetRules Target) : base(Target)
	{
		// Path pointing to the SDK's root.
		FirebaseSdkRoot = Path.Combine(PluginDirectory, "Source/ThirdParty/firebase_cpp_sdk/");

		string ProjectDirectory = (Target != null && Target.ProjectFile != null ? Path.GetDirectoryName(Target.ProjectFile.ToString()) : "");

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Unreal Engine Dependencies
		PublicDependencyModuleNames .AddRange(new string[] { "Core" });
		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "OpenSSL" });

		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PrivateDependencyModuleNames.Add("Launch");
		}

		// For Project config panel.
		if (Target.Type == TargetType.Editor)
		{
			PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UnrealEd", "PropertyEditor", "Settings" });
		}

		// Required system frameworks
		if (Target.Platform == UnrealTargetPlatform.Mac || Target.Platform == UnrealTargetPlatform.IOS)
        {
			if (Target.Platform == UnrealTargetPlatform.Mac)
            {
				PublicFrameworks.Add("Kerberos");
			}
			else if (Target.Platform == UnrealTargetPlatform.IOS)
            {
				PublicFrameworks.Add("UniformTypeIdentifiers"); 
            }

			PublicFrameworks.AddRange(new string[]
			{
				"CoreFoundation", 
				"Foundation",
				"Security",
				"GSS",
				"SystemConfiguration",
				"JavaScriptCore",
				"LocalAuthentication"
			});
		}

		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicSystemLibraries.Add("pthread");
			PublicSystemLibraries.Add("c");
			AddEngineThirdPartyPrivateStaticDependencies(Target, "libcurl");
		}
		   
		// Module includes
		PublicIncludePaths .Add(Path.Combine(ModuleDirectory, "Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

		// -------------------------------------------------------------- //
		//																  //
		//							Firebase SDK						  //
		//																  //
		// -------------------------------------------------------------- //

		// Firebase Includes
		if (Target.Platform == UnrealTargetPlatform.Linux)
        {  
			PublicIncludePaths.Add(Path.Combine(FirebaseSdkRoot, "include/linux"));

			string DepRoot = Path.Combine(FirebaseSdkRoot, "libs/linux/x86_64/dependencies/");

			PublicAdditionalLibraries.AddRange(new string[] 
			{
				Path.Combine(DepRoot, "libfirestore_dep.a"),
				Path.Combine(DepRoot, "libglib-2.0.so"),
				Path.Combine(DepRoot, "libgrpc.a"),
				Path.Combine(DepRoot, "libsecret-1.so")
			});
		}
		else 
        {
			PublicIncludePaths.Add(Path.Combine(FirebaseSdkRoot, "include"));
        }

		// Android UPL file
		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "FirebaseSdk.android.upl.xml"));
		}

		// iOS additional frameworks and library
		else if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			// iOS UPL
			AdditionalPropertiesForReceipt.Add("IOSPlugin", Path.Combine(ModuleDirectory, "FirebaseSdk.ios.upl.xml"));

			// C++ Frameworks
			foreach (string FirebaseFramework in FirebaseFrameworks)
			{
				string FrameworkLocation = Path.Combine(FirebaseSdkRoot, "frameworks/ios/universal/" + FirebaseFramework + ".framework.zip");

				if (!File.Exists(FrameworkLocation))
				{
					System.Console.Error.WriteLine("Failed to find iOS framework \"" + FirebaseFramework + "\" for Firebase as file " + FrameworkLocation + " doesn't exist.");
					continue;
				}

				PublicDefinitions.Add("WITH_" + FirebaseFramework.ToUpper() + "=1");

				PublicAdditionalFrameworks.Add(CreateFramework
				(
					FirebaseFramework,
					FrameworkLocation,
					null
				));
			}

			// Objective-C Frameworks
			AddFrameworkChecked("PromisesObjC");
			AddFrameworkChecked("abseil");
			AddFrameworkChecked("AppAuth");
			AddFrameworkChecked("BoringSSL-GRPC");
			AddFrameworkChecked("firebase_installations");
			AddFrameworkChecked("FirebaseABTesting");
			AddFrameworkChecked("FirebaseAnalytics");
			AddFrameworkChecked("FirebaseAppDistribution");
			AddFrameworkChecked("FirebaseAuth");
			AddFrameworkChecked("FirebaseCore");
			AddFrameworkChecked("FirebaseCoreDiagnostics");
			AddFrameworkChecked("FirebaseDatabase");
			AddFrameworkChecked("FirebaseDynamicLinks");
			AddFrameworkChecked("FirebaseFirestore");
			AddFrameworkChecked("FirebaseFunctions");
			AddFrameworkChecked("FirebaseInAppMessaging", "Resources/InAppMessagingDisplayResources.bundle");
			AddFrameworkChecked("FirebaseInstallations");
			AddFrameworkChecked("FirebaseInstanceID");
			AddFrameworkChecked("FirebaseMessaging");
			AddFrameworkChecked("FirebasePerformance");
			AddFrameworkChecked("FirebaseRemoteConfig");
			AddFrameworkChecked("FirebaseStorage");
			AddFrameworkChecked("GoogleAppMeasurement");
			AddFrameworkChecked("GoogleDataTransport");
			AddFrameworkChecked("GoogleMobileAds");
			AddFrameworkChecked("GoogleSignIn", "Resources/GoogleSignIn.bundle");
			AddFrameworkChecked("GoogleUtilities");
			AddFrameworkChecked("gRPC-C++", "Resources/gRPCCertificates-Cpp.bundle");
			AddFrameworkChecked("gRPC-Core");
			AddFrameworkChecked("GTMAppAuth");
			AddFrameworkChecked("GTMSessionFetcher");
			AddFrameworkChecked("leveldb-library");
			AddFrameworkChecked("nanopb");
			AddFrameworkChecked("Protobuf");
			AddFrameworkChecked("UserMessagingPlatform");

			// Native SDK include
			PublicSystemIncludePaths.Add(Path.Combine(FirebaseSdkRoot, "include/ios/"));

			// Required plist file.
			if (!File.Exists(Path.Combine(ProjectDirectory, "Services/GoogleService-Info.plist")))
			{
				System.Console.WriteLine("Failed to find GoogleService-Info.plist.");
            }
		}

		// File google-services.json now used by most platforms.
        {
			AddRuntimeDependency(Path.Combine(GetServicesDir(Target), "google-services.json"));
		}
		
		// iOS uses Frameworks instead.
		if (Target.Platform != UnrealTargetPlatform.IOS)
		{
			// Firebase libraries
			string[] LibrariesDir = GetFirebaseSdkRelativeLibsDir(Target);
			foreach (string LibraryDir in LibrariesDir)
			{
				foreach (string FirebaseLibrary in FirebaseLibraries)
				{
					string LibLocation = Path.Combine(FirebaseSdkRoot, LibraryDir, GetPlatformLibPrefix() + FirebaseLibrary + "." + GetPlatformLibPostfix());
					if (!File.Exists(LibLocation))
					{
						System.Console.Error.WriteLine("Required library " + LibLocation + " doesn't exist.");
					}
					else
					{
						PublicAdditionalLibraries.Add(LibLocation);
						PublicDefinitions.Add("WITH_" + FirebaseLibrary.ToUpper() + "=1");
					}
				}
			}
		}
	}

	private string[] GetFirebaseSdkRelativeLibsDir(ReadOnlyTargetRules Target)
	{
		const string LibsDir = "libs/";

		bool bIsDebugBuild = IsDebugBuild();

		if (Target.Platform == UnrealTargetPlatform.Win32)
		{
			return new string[]
			{
				LibsDir + "/windows/VS2015/MD/x86/" 
					+ (bIsDebugBuild ? "Debug" : "Release")
			};
		}

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			return new string[]
			{
				LibsDir + "windows/VS2015/MD/x64/"
					+ (bIsDebugBuild ? "Debug" : "Release")
			};
		}

		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			return new string[]
			{
				LibsDir + "darwin/x86_64",
				LibsDir + "darwin/universal",
			};
		}

		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			return new string[]
			{
				LibsDir + "android/armeabi-v7a/c++",
				LibsDir + "android/arm64-v8a/c++",

				// Uncomment these libs if you target these architectures.
				// Note that Unreal Engine doesn't let you build x86 without a Source Build.
				//LibsDir + "android/x86/c++",
				//LibsDir + "android/x86_64/c++",
			};
		}

		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			return new string[]
			{
				LibsDir + "ios/universal/",
				
				// Uncomment these libs if you target these architectures.
				//LibsDir + "ios/arm64/",
				//LibsDir + "ios/armv7/",
				//LibsDir + "ios/i386/",
				//LibsDir + "ios/x86_64/",
			};
		}

		if (Target.IsInPlatformGroup(UnrealPlatformGroup.Unix) || Target.Platform == UnrealTargetPlatform.Linux)
		{
			return new string[]
			{
				LibsDir + "linux/x86_64/",
				//LibsDir + "linux/i386/",
			};
		}

		return new string[] { };
	}

	private string GetPlatformLibPrefix()
	{
		return
			Target.Platform == UnrealTargetPlatform.Win64 ||
			Target.Platform == UnrealTargetPlatform.Win32 ?
				"" : "lib";
	}

	private string GetPlatformLibPostfix()
	{
		return
			Target.Platform == UnrealTargetPlatform.Win64 ||
			Target.Platform == UnrealTargetPlatform.Win32 ?
				"lib" : "a";
	}

	private bool IsDebugBuild()
    {
		if (bLinkDebugFirebaseLibrary)
		{
			switch (Target.Configuration)
			{
				case UnrealTargetConfiguration.DebugGame:
				case UnrealTargetConfiguration.Debug:
					return true;
				default:
					return false;
			}
		}
		return false;
	}

	private Framework CreateFramework(string Name, string Path, string Bundle)
    {
		return new Framework
		(
			Name, Path, Bundle
		);
	}

	private void AddFrameworkChecked(string Name, string Bundle = null)
    {
		string FrameworkRoot	 = Path.Combine(FirebaseSdkRoot, "frameworks/ios/universal");
		string FrameworkLocation = FrameworkRoot + "/" + Name + ".framework.zip";

		if (!File.Exists(FrameworkLocation))
        {
			System.Console.Error.WriteLine("Failed to find iOS framework \"" + Name + "\" for Firebase as file " + FrameworkLocation + " doesn't exist.");
			return;
		}

		PublicAdditionalFrameworks.Add(CreateFramework
		(
			Name, FrameworkLocation, Bundle
		));
	}

	private void AddRuntimeDependency(string Path, string Target = null, StagedFileType Type = StagedFileType.UFS)
    {
		if (Target == null)
        {
			RuntimeDependencies.Add(Path, Type);
		}
		else
        {
			RuntimeDependencies.Add(Target, Path, Type);
		}
    }

	private string GetServicesDir(ReadOnlyTargetRules Target)
    {
		return "$(ProjectDir)/Services/";
	}
}

