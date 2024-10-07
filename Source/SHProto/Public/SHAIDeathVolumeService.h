#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SHAIDeathVolumeService.generated.h"

class ASHAIDeathVolume;

UCLASS()
class USHAIDeathVolumeService : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHAIDeathVolume*> _WorldDeathVolumes;
    
public:
    USHAIDeathVolumeService();

};

