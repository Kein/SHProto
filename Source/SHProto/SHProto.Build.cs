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
            "UMG",
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
            "GameplayAbilities",
            "GameplayTasks",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "SlateCore",
            "TemplateSequence",
            "GameplayCameras",
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
            "NinjaCharacter",
            "SimpleSpawnPoints",
            "UCA",
            "UCCE",
            "UCSW",
            "UCW"
        });
    }
}
