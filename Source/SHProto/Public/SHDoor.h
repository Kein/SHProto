#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHDoor.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UPlaneSideDetectionComponent;
class USHAkDoorComponent;
class USHAkPortalDoorComponent;
class USHDoorAnimationsComponent;
class USHDoorLockComponent;
class USHDoorMovementBaseComponent;
class USHDoorMovementComponent;
class USHGameplayMapDoorComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionIconSlotComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* FrameMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* DoorMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* DoorMeshHandleSpotAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* DoorMeshHandleSpotBelow;
    
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
    USHAkDoorComponent* SHAkDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* SHAkPortalBounds;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkPortalDoorComponent* SHAkPortalDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHDoorLockComponent* DoorLock;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHDoorAnimationsComponent* DoorAnimations;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHDoorMovementComponent* DoorMovement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapDoorComponent* GameplayMapObject;
    
public:
    ASHDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent);
    
};

