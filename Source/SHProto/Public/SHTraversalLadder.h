#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHDetectionSide.h"
#include "SHTraversalBase.h"
#include "SHTraversalLadder.generated.h"

class ASHCharacterPlay;
class ASHTraversalLadder;
class UBoxComponent;
class USHGameplayMapLadderComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USHTraversalLadderAnimInstance;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHTraversalLadder : public ASHTraversalBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHLadderTraversalEvent, ASHTraversalLadder*, LadderActorPtr, ESHDetectionSide, Side);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHLadderEvent, ASHTraversalLadder*, LadderActorPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* LadderMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGenericAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphereAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIconAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectableAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShapeAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGenericBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphereBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIconBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectableBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShapeBelow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapLadderComponent* GameplayMapObject;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManagerAbove;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManagerBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StepsNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D PitchViewRotationLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D YawViewRotationLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHTraversalLadderAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintAssignable)
    FSHLadderTraversalEvent TraversalStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHLadderTraversalEvent TraversalFinishedEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASHCharacterPlay* InteractingCharacter;
    
    UPROPERTY(Transient)
    USHTraversalLadderAnimInstance* LinkedTraversalLadderAnimGraphInstance;
    
public:
    ASHTraversalLadder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessSlideSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessMovementSnapEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessLookAtRotationAbsoluteEnd(bool WasCompleted);
    
    UFUNCTION()
    void ProcessInteractionManagerBelowInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessInteractionManagerAboveInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
    UFUNCTION()
    void ProcessEndTraversalStart();
    
    UFUNCTION()
    void ProcessEndTraversalFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTraversalStarted(const ESHDetectionSide Side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTraversalFinished(const ESHDetectionSide Side);
    
public:
    UFUNCTION(BlueprintPure)
    FTransform ComputeStepWorldTransformClosestTo(const FVector& InWorldLoc) const;
    
};

