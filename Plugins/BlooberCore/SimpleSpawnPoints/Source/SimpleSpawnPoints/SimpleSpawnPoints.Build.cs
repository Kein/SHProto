using UnrealBuildTool;

public class SimpleSpawnPoints : ModuleRules {
    public SimpleSpawnPoints(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LevelStreaming",
            "UCW",
            "UMG",
        });
    }
}
