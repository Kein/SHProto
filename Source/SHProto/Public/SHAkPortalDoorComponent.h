#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "SHAkPortalComponent.h"
#include "SHAkPortalDoorComponent.generated.h"

class USHDoorMovementBaseComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkPortalDoorComponent : public USHAkPortalComponent {
    GENERATED_BODY()
public:
    USHAkPortalDoorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetInitialState(AkAcousticPortalState InState);
    
    UFUNCTION()
    void ProcessDoorAlphaChangedEvent(USHDoorMovementBaseComponent* DummyComponent);
    
};

