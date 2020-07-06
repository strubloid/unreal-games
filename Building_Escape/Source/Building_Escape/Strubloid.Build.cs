// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Strubloid : ModuleRules
{
    public Strubloid(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        //Only if you created the Public and Private folder paths
        PublicIncludePaths.AddRange(new string[]{});
		PrivateIncludePaths.AddRange(new string[]{});

    }
}
