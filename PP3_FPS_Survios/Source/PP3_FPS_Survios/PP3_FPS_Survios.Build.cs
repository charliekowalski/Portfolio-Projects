// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PP3_FPS_Survios : ModuleRules
{
	public PP3_FPS_Survios(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
