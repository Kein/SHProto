﻿using UnrealBuildTool;

public class SHProtoEditorTarget : TargetRules {
	public SHProtoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

		ExtraModuleNames.AddRange(new string[]
		{
			"SHProto",
		});
	}
}
