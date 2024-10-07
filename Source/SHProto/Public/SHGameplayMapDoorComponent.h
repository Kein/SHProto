#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayMapDoorMode.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapDoorComponent.generated.h"

class AActor;
class USHDoorAnimationsComponent;
class USHDoorLockBaseComponent;
class USHDoorMovementComponent;
class USHFocusableComponent;
class USHSlidingDoorAnimationsComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHGameplayMapDoorComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnforceMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHGameplayMapDoorMode ModeToEnforce;
    
    UPROPERTY(SaveGame)
    bool bDisplayCannotBePassedAsObstacle;
    
public:
    USHGameplayMapDoorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnPhysicMovementAppliedForceFromActor(USHDoorMovementComponent* DoorMovementComponent, AActor* ActorContext);
    
    UFUNCTION()
    void OnOpenAnimationPlayed(USHSlidingDoorAnimationsComponent* SlidingDoorAnimationsComponent);
    
    UFUNCTION()
    void OnLockedAnimationPlayed(USHSlidingDoorAnimationsComponent* SlidingDoorAnimationsComponent);
    
    UFUNCTION()
    void OnDoorLockStateChanged(USHDoorLockBaseComponent* DoorLockBaseComponent);
    
    UFUNCTION()
    void OnAutoLockedAnimationPlayed(USHDoorAnimationsComponent* DoorAnimationsComponent);
    
    UFUNCTION()
    void OnAttachmentFocusableShown(USHFocusableComponent* FocusableComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayCannotBePassedAsObstacle();
    
};

