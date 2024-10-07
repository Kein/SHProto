using UnrealBuildTool;

public class UCW : ModuleRules {
    public UCW(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
