// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Comp313Adam : ModuleRules
{
	public Comp313Adam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
