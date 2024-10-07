using UnrealBuildTool;

public class Dialog : ModuleRules {
    public Dialog(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "Dai",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "LevelSequence",
            "MovieScene",
        });
    }
}
