using UnrealBuildTool;

public class Mai : ModuleRules {
    public Mai(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Being",
            "Core",
            "CoreUObject",
            "Dai",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NavigationSystem",
            "NinjaCharacter",
        });
    }
}
