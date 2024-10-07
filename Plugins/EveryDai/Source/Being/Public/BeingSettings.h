#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESoundMovement.h"
#include "WalkingStanceData.h"
#include "BeingSettings.generated.h"

class ABeingFootstep;

UCLASS(DefaultConfig, Config=Game)
class BEING_API UBeingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 _WalkingStanceCount;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TArray<FWalkingStanceData> _WalkingStances;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ABeingFootstep> _DebugFootsteps;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EPhysicalSurface> _DebugSurface;
    
    UPROPERTY(Config, EditAnywhere)
    ESoundMovement _DebugSoundMovement;
    
    UPROPERTY(Config, EditAnywhere)
    FName _DebugFootSockets[5];
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FString> _WwiseSurfaces;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath _WWiseFootSwitches[5];
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath _WWiseMoveSwitches[5];
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FSoftObjectPath> _WWiseSurfSwitches;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath TerrainTexturesMap;
    
    UBeingSettings();

};

