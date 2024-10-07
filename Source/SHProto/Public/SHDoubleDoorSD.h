#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHDoubleDoorSD.generated.h"

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
class SHPROTO_API ASHDoubleDoorSD : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* FrameMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* FramePlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* LeftDoorMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* LeftDoorMeshHandleSpotAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* LeftDoorMeshHandleSpotBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* LeftDoorPlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* LeftDoorPreHitDetector;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* RightDoorMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* RightDoorMeshHandleSpotAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* RightDoorMeshHandleSpotBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* RightDoorPlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* RightDoorPreHitDetector;
    
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
    UCapsuleComponent* LockAnimSpotAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* LockAnimSpotBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkDoorComponent* LeftSHAkDoorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkDoorComponent* RightSHAkDoorComponent;
    
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
    USHDoorMovementComponent* RightDoorMovement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHDoorMovementComponent* LeftDoorMovement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapDoorComponent* GameplayMapObject;
    
public:
    ASHDoubleDoorSD(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessDoorAlphaChanged(USHDoorMovementBaseComponent* MovementComponent);
    
};

