using UnrealBuildTool;

public class CharacterAnimationExtras : ModuleRules {
    public CharacterAnimationExtras(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
