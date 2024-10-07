using UnrealBuildTool;

public class BlooberWwise : ModuleRules {
    public BlooberWwise(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "Engine",
            "Niagara",
        });
    }
}
