#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ESHFocusableInputActionTypeEnum.h"
#include "SHValve.generated.h"

class ACharacter;
class ASHCharacterPlay;
class UBoxComponent;
class UCapsuleComponent;
class UCurveFloat;
class UPrimitiveComponent;
class USHAkValveComponent;
class USHCharacterPlayCombatComponent;
class USHCineCameraComponent;
class USHFocusableComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USHValveAnimInstance;
class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class ASHValve : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* ValveMeshPivot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ValveMesh;
    
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
    USceneComponent* FlashlightFocusSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkValveComponent* SHAkValve;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHFocusableComponent* FocusableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RequiredRotatedAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHValveAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator ValveMeshAngleCurveEffector;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ValveTurnFirstPhaseAngleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ValveTurnSecondPhaseAngleCurve;
    
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
    UPROPERTY(Transient)
    USHValveAnimInstance* LinkedAnimGraphInstance;
    
    UPROPERTY(SaveGame)
    float TotalRotatedAngle;
    
public:
    ASHValve(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestAbortInteraction();
    
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
    void ProcessAnimInstStartedInteraction(USHValveAnimInstance* AnimInstPtr);
    
    UFUNCTION()
    void ProcessAnimInstFinishedInteraction(USHValveAnimInstance* AnimInstPtr);
    
    UFUNCTION()
    void ProcessAnimInstChangedProgressPhase(USHValveAnimInstance* AnimInstPtr, int32 InPhaseNumber, bool bHasStarted);
    
    UFUNCTION()
    void ProcessAnimInstBeginFinishInteraction(USHValveAnimInstance* AnimInstPtr);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalRotatedAngle() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPhaseNumber() const;
    
};

