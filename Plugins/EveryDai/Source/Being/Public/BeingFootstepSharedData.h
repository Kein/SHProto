#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BeingFootstepSharedData.generated.h"

class UAkSwitchValue;

UCLASS()
class BEING_API UBeingFootstepSharedData : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UAkSwitchValue*> _WWiseFootSwitchesLoaded;
    
    UPROPERTY(Transient)
    TArray<UAkSwitchValue*> _WWiseMoveSwitchesLoaded;
    
    UPROPERTY(Transient)
    TArray<UAkSwitchValue*> _WWiseSurfSwitchesLoaded;
    
public:
    UBeingFootstepSharedData();

};

