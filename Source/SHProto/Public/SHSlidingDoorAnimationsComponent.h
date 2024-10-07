#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHDoorAnimationsBaseComponent.h"
#include "SHSlidingDoorAnimationsComponent.generated.h"

class UAnimMontage;
class USHSlidingDoorAnimationsComponent;
class USHSlidingDoorAnimationsSetData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSlidingDoorAnimationsComponent : public USHDoorAnimationsBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSlidingDoorAnimationEventBP, USHSlidingDoorAnimationsComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSlidingDoorAnimationEvent, USHSlidingDoorAnimationsComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHSlidingDoorAnimationsSetData* AnimationsSetData;
    
    UPROPERTY(BlueprintAssignable)
    FSHSlidingDoorAnimationEventBP OnLockedAnimPlayed;
    
    UPROPERTY(BlueprintAssignable)
    FSHSlidingDoorAnimationEventBP OnOpenAnimPlayed;
    
public:
    USHSlidingDoorAnimationsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void PutCharacterOnSpotFinished(bool WasCompleted);
    
    UFUNCTION()
    void OnOpenAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnLockedAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void MovementSnapFinished(bool WasCompleted);
    
};

