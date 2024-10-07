using UnrealBuildTool;

public class Being : ModuleRules {
    public Being(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "Core",
            "CoreUObject",
            "Dai",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NavigationSystem",
            "PhysicsCore",
        });
    }
}
