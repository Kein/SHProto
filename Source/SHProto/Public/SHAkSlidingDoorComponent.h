#pragma once
#include "CoreMinimal.h"
#include "SHAkDoorBaseComponent.h"
#include "SHAkSlidingDoorComponent.generated.h"

class USHSlidingDoorAnimationsComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkSlidingDoorComponent : public USHAkDoorBaseComponent {
    GENERATED_BODY()
public:
    USHAkSlidingDoorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessOnOpenAnimPlayedNative(USHSlidingDoorAnimationsComponent* SlidingDoorAnimComponent);
    
    UFUNCTION()
    void ProcessOnLockedAnimPlayedNative(USHSlidingDoorAnimationsComponent* SlidingDoorAnimComponent);
    
};

