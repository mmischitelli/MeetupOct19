// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class HelloWorld : ModuleRules
{
	public HelloWorld(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.NoSharedPCHs;
        PrivatePCHHeaderFile = "HelloWorld.h";
        CppStandard = CppStandardVersion.Cpp17;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
