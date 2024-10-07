using UnrealBuildTool;

public class BlooberMedia : ModuleRules {
    public BlooberMedia(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
