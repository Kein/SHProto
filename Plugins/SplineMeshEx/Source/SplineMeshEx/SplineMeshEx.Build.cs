using UnrealBuildTool;

public class SplineMeshEx : ModuleRules {
    public SplineMeshEx(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "PhysicsCore",
            "ProceduralMeshComponent",
        });
    }
}
