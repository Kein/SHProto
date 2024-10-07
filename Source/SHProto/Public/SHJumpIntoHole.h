#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EffectHandle.h"
#include "ESHAnimEndType.h"
#include "ESHFocusableInputActionTypeEnum.h"
#include "PlayAnimationData.h"
#include "SHCameraAnimationData.h"
#include "SHJumpIntoHole.generated.h"

class ACharacter;
class ASHCameraAnimationExecutive;
class ASHCharacterPlay;
class ASHJumpIntoHole;
class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USHAnimMontagePlayer;
class USHCharacterPlayCombatComponent;
class USHCineCameraComponent;
class USHFocusableComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHJumpIntoHoleAnimInstance;
class USHRaycastDetectableComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Abstract)
class ASHJumpIntoHole : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHJumpIntoHoleEvent, ASHJumpIntoHole*, Actor);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCineCameraComponent* FocusCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* InteractionProximitySphere;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* InteractionAnimSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* TeleportToOnPlayingEndComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* FlashlightFocusSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHFocusableComponent* FocusableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StageChangeAnimationTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData JumpAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData LandAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHJumpIntoHoleAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCameraFadingOnTeleport;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraFadeKeepTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CameraFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFocusCameraChangeTransformPerStage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTransform> FocusCameraRelativeTransforms;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFocusTracking;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimationJump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimationLand;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle LightEffect;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent InteractionStartedEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent StageChangedEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent StageReadyEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent JumpPlayedEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent LandPlayedEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent InteractionFinishedEventBlueprint;
    
    UPROPERTY(BlueprintAssignable)
    FSHJumpIntoHoleEvent InteractionAbortedEventBlueprint;
    
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
    UPROPERTY(Transient)
    USHJumpIntoHoleAnimInstance* LinkedAnimGraphInstance;
    
    UPROPERTY(Transient)
    USHAnimMontagePlayer* AnimMontagePlayer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASHCameraAnimationExecutive> PlayingCameraAnimExe;
    
public:
    ASHJumpIntoHole(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessMoveCharacterToSpotFinished(bool WasCompleted);
    
    UFUNCTION()
    void ProcessLandCameraAnimBlendOutOrEnd();
    
    UFUNCTION()
    void ProcessLandAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void ProcessJumpAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessInteractionGenericGrabbed(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
    UFUNCTION()
    void ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessFocusableInputActionEvent(ESHFocusableInputActionTypeEnum InputActionType, float KeyValue);
    
    UFUNCTION()
    void ProcessAnimInstStartedInteraction(USHJumpIntoHoleAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstStageAdvanced(USHJumpIntoHoleAnimInstance* AnimInst);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentFocusStageIndex() const;
    
};

