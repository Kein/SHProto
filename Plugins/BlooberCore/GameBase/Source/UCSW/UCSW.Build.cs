using UnrealBuildTool;

public class UCSW : ModuleRules {
    public UCSW(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Commons",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameBase",
            "InputCore",
            "InputRebinding",
            "Slate",
            "SlateCore",
            "UCW",
            "UMG",
        });
    }
}
