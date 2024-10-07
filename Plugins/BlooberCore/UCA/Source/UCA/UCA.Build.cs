using UnrealBuildTool;

public class UCA : ModuleRules {
    public UCA(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Commons",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "UMG",
        });
    }
}
