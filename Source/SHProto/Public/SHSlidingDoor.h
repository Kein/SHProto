#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHSlidingDoor.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UPlaneSideDetectionComponent;
class USHAkPortalDoorComponent;
class USHAkSlidingDoorComponent;
class USHDoorMovementBaseComponent;
class USHGameplayMapDoorComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionIconSlotComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USHSlidingDoorAnimationsComponent;
class USHSlidingDoorLockComponent;
class USHSlidingDoorMovementComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHSlidingDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* FrameMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* DoorMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* DoorPlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphere;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconSlotComponent* InteractionIconSlotFront;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconSlotComponent* InteractionIconSlotBack;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* PreHitDetector;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* LockAnimSpotAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* LockAnimSpotBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkSlidingDoorComponent* SHAkSlidingDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* SHAkPortalBounds;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkPortalDoorComponent* SHAkPortalDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSlidingDoorLockComponent* LockComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSlidingDoorAnimationsComponent* DoorAnimationsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSlidingDoorMovementComponent* DoorMovement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapDoorComponent* GameplayMapObject;
    
public:
    ASHSlidingDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent);
    
};

