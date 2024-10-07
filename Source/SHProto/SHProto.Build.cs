using UnrealBuildTool;

public class SHProto : ModuleRules {
    public SHProto(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "AIModule",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "GameplayTags",
            "GeometryCollectionEngine",
            "InputCore",
            "LevelSequence",
            "CinematicCamera",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "SlateCore",
            "TemplateSequence",
            "GameplayCameras",
            "UMG",
            // 3rd party
            "AkAudio",
            "Being",
            "BinkMediaPlayer",
            "BlooberWwise",
            "Player",
            "InputRebinding",
            "Commons",
            "LevelStreaming",
            "Cutscenes",
            "Detection",
            "Dialog",
            "GameBase",
            "PostProcessVolumeEx",
            "Mai",
            "SimpleSpawnPoints",
            "UCA",
            "UCCE",
            "UCSW",
            "UCW"
        });
    }
}
