using UnrealBuildTool;

public class GameBase : ModuleRules {
    public GameBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GlobalProperties",
            "InputCore",
            "InputRebinding",
            "LevelStreaming",
            "Overlay",
            "SlateCore",
            "UCW",
            "UMG",
        });
    }
}
