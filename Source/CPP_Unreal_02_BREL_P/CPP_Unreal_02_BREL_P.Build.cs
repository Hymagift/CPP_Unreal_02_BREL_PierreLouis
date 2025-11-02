// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_Unreal_02_BREL_P : ModuleRules
{
	public CPP_Unreal_02_BREL_P(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CPP_Unreal_02_BREL_P",
			"CPP_Unreal_02_BREL_P/Variant_Horror",
			"CPP_Unreal_02_BREL_P/Variant_Horror/UI",
			"CPP_Unreal_02_BREL_P/Variant_Shooter",
			"CPP_Unreal_02_BREL_P/Variant_Shooter/AI",
			"CPP_Unreal_02_BREL_P/Variant_Shooter/UI",
			"CPP_Unreal_02_BREL_P/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
