#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHFXSwarmSubcomp.generated.h"

class ASHSwarmVolume;
class USHFXSwarmSubcompSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHFXSwarmSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXSwarmSubcompSettings* Settings;
    
    UPROPERTY(Transient)
    TArray<ASHSwarmVolume*> RegisteredSwarmVolumes;
    
public:
    USHFXSwarmSubcomp();

    UFUNCTION(BlueprintPure)
    bool IsInSwarmZone() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ASHSwarmVolume*> GetRegisteredSwarmVolumes() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRegisteredSwarmVolumeCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentZoneCount() const;
    
};

