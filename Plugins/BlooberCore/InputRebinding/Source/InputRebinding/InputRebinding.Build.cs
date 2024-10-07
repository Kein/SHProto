using UnrealBuildTool;

public class InputRebinding : ModuleRules {
    public InputRebinding(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Commons",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
        });
    }
}
