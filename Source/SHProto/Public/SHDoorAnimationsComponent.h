#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHDoorAnimationsBaseComponent.h"
#include "SHDoorAnimationsComponent.generated.h"

class AActor;
class UAnimMontage;
class UObject;
class USHDoorAnimationsComponent;
class USHDoorAnimationsSetData;
class USHDoorMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDoorAnimationsComponent : public USHDoorAnimationsBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorAnimationEventBP, USHDoorAnimationsComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorAnimationEvent, USHDoorAnimationsComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHDoorAnimationsSetData* AnimationsSetData;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorAnimationEventBP OnOpenAnimPlayed;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorAnimationEventBP OnLockAnimPlayed;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorAnimationEventBP OnAutoLockedDoorCheckAnimPlayed;
    
public:
    USHDoorAnimationsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayAutoLockedDoorCheckAnimBlocked(const bool bInBlocked, const UObject* Object);
    
protected:
    UFUNCTION()
    void OnPhysicMovementAppliedForceFromActor(USHDoorMovementComponent* DoorMovementComponent, AActor* ActorContext);
    
    UFUNCTION()
    void OnAutoLockedDoorCheckAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayAutoLockedDoorCheckAnimBlocked() const;
    
};

