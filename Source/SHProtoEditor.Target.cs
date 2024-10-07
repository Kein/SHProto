using UnrealBuildTool;

public class SHProtoEditorTarget : TargetRules {
	public SHProtoEditorTarget(TargetInfo Target) : base(Target)
	{

		GlobalDefinitions.Add("BLOOBER_TEAM=1");
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

		ExtraModuleNames.AddRange(new string[]
		{
			"SHProto",
		});
	}
}
