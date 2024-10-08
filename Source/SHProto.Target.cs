﻿using UnrealBuildTool;

public class SHProtoTarget : TargetRules {
	public SHProtoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

		ExtraModuleNames.AddRange(new string[]
		{
			"SHProto",
		});
	}
}
