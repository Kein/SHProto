#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/HitResult.h"
#include "ESHFocusableInputActionTypeEnum.h"
#include "SHSearchFocus.generated.h"

class ACharacter;
class ASHCharacterPlay;
class ASHSearchFocus;
class UAkAudioEvent;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USHCharacterPlayCombatComponent;
class USHCineCameraComponent;
class USHFocusableComponent;
class USHGameplayMapFocusableComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USHSearchFocusAnimInstance;
class USceneComponent;
class USphereComponent;

UCLASS(Abstract)
class ASHSearchFocus : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSearchFocusBlueprintEvent, ASHSearchFocus*, ActorPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* FocusExtraLightsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHCineCameraComponent* FocusCamera;
    
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
    UCapsuleComponent* InteractionAnimSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHFocusableComponent* FocusableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapFocusableComponent* GameplayMapMarkerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNoCompleteFoundItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle CompleteFoundItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StageChangeAnimationTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHSearchFocusAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTrackInteractingCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BoneToTrackInteractingCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseFocusCameraChangeTransformPerStage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTransform> FocusCameraRelativeTransforms;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StopAnimNotifiesAudioEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHSearchFocusBlueprintEvent OnCompleteFoundItemCollected;
    
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
    UPROPERTY(Transient)
    USHSearchFocusAnimInstance* LinkedAnimGraphInstance;
    
public:
    ASHSearchFocus(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessMoveCharacterToSpotFinished(bool WasCompleted);
    
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
    void ProcessAnimInstStartedInteraction(USHSearchFocusAnimInstance* AnimInst);
    
    UFUNCTION()
    void ProcessAnimInstStageAdvanced(USHSearchFocusAnimInstance* AnimInst);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentFocusStageIndex() const;
    
};

