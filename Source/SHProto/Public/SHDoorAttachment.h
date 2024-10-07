#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "PlayAnimationData.h"
#include "SHBaseDoorAttachment.h"
#include "SHDoorAttachment.generated.h"

class ASHCharacterPlay;
class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class USHAkDynamicTickComponent;
class USHCharacterPlayCombatComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;

UCLASS(Abstract)
class ASHDoorAttachment : public ASHBaseDoorAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* AnimSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkDynamicTickComponent* SHAkComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* InteractingCharacter;
    
public:
    ASHDoorAttachment(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInteractionAnimation(const FPlayAnimationData& AnimToPlay);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractionAnimation(const FPlayAnimationData& AnimToPlay);
    
    UFUNCTION(BlueprintCallable)
    void PutCharacterOnSpotRequest(float InBlendInTime);
    
    UFUNCTION()
    void ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessPutCharacterOnSpotFinished(bool WasCompleted);
    
    UFUNCTION()
    void ProcessMovementSnapFinished(bool WasCompleted);
    
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessInteracted(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
    UFUNCTION()
    void ProcessActionAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION(BlueprintCallable)
    bool PlayInteractionAnimation(const FPlayAnimationData& AnimToPlay);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionAnimationEnd(ESHAnimEndType AnimEndType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteracted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterOnSpot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreak();
    
    UFUNCTION(BlueprintPure)
    bool IsProximityCharacterOnCorrectSide() const;
    
};

