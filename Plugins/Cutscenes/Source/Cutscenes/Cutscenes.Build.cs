using UnrealBuildTool;

public class Cutscenes : ModuleRules {
    public Cutscenes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputRebinding",
            "InstancedMeshEx",
            "LevelSequence",
            "LevelStreaming",
            "MovieScene",
            "UCSW",
            "UCW",
            "UMG",
        });
    }
}
