using UnrealBuildTool;

public class DLCManager : ModuleRules {
    public DLCManager(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Commons",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
