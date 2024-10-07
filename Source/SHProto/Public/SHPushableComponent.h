#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "SHPushableHandleData.h"
#include "SHPushableComponent.generated.h"

class AActor;
class ASHCharacterPlay;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class USHCharacterPlayCombatComponent;
class USHPushableComponent;
class USHPushingObjectAnimInstance;
class USphereComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPushableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPushableComponentEvent, USHPushableComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBlockedOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableLeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHPushingObjectAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookAtRotationSnapDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookAtRotationSnapPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bApplyViewRotationLimits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D ViewRotationLimitPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasStaticYawRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D ViewRotationLimitYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PossibleMovementsDebugSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FloorDebugMiddleLocal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FloorDebugExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool bManageOwnerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHPushableHandleData> Handles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector CustomBoundsScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector MovementFloorValidationOriginOffset;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnPreStartBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnStartedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnMovementBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnCollisionHitBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnFinishedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnInteruptedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSHPushableComponentEvent OnComponentBlockedChangedBP;
    
    UPROPERTY(Instanced, Transient)
    UMeshComponent* OwnerMesh;
    
    UPROPERTY(Instanced, Transient)
    USphereComponent* ProximitySphere;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* InteractingCharacter;
    
    UPROPERTY(Transient)
    USHPushingObjectAnimInstance* LinkedAnimGraphInstance;
    
    UPROPERTY(SaveGame)
    FVector LastFrameWorldLoc;
    
public:
    USHPushableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportAbsolute(const FVector& InWorldLoc);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentBlocked(const bool Blocked, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessSlideSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessMovementSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessLookAtRotationAbsoluteEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessAnimInstStoppedMovement(USHPushingObjectAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstStartedMovement(USHPushingObjectAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstStartedInteraction(USHPushingObjectAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstFiredFinishInteraction(USHPushingObjectAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstFinishedInteraction(USHPushingObjectAnimInstance* AnimInst);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManualFinishRequest();
    
    UFUNCTION(BlueprintPure)
    bool IsInteractingCharacterStandingOnOwnerMesh() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsComponentBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void Interact(ASHCharacterPlay* InInteractingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USphereComponent* InProximitySphere, UMeshComponent* InMainMesh);
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetOwnerMesh() const;
    
    UFUNCTION(BlueprintPure)
    USHPushingObjectAnimInstance* GetLinkedAnimGraphInstance() const;
    
    UFUNCTION(BlueprintPure)
    ASHCharacterPlay* GetInteractingCharacter() const;
    
};

