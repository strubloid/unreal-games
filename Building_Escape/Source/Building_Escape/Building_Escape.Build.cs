// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Building_Escape : ModuleRules
{
    public Building_Escape(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        //Only if you created the Public and Private folder paths
        PublicIncludePaths.AddRange(new string[]{"Building_Escape/Public"});
		PrivateIncludePaths.AddRange(new string[]{"Building_Escape/Private"});

    }
}
