#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHNPCAnimInstanceLocomotionSlot.h"
#include "SHNPCAnimInstanceLocomotionSlotConfiguration.h"
#include "Templates/SubclassOf.h"
#include "WholeBodyTranslation.h"
#include "SHNPCAnimInstance.generated.h"

class USHAnimComponent;
class USHNPCAnimInstanceStateData;
class USHNPCLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHNPCAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USHNPCAnimInstanceStateData> AnimInstanceStateDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHNPCAnimInstanceLocomotionSlotConfiguration> LocomotionSlotConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawAnimInstanceDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRagdollDeathEnable;
    
    UPROPERTY(BlueprintReadOnly)
    FWholeBodyTranslation AdditionalTranslation;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalTranslationAlpha;
    
    UPROPERTY()
    USHNPCAnimInstanceStateData* p_AnimInstanceStateData;
    
    UPROPERTY()
    TArray<FSHNPCAnimInstanceLocomotionSlot> p_LocomotionSlots;
    
public:
    USHNPCAnimInstance();

    UFUNCTION(BlueprintCallable)
    UAnimInstance* SetNewLocomotionAnimInstance(TSubclassOf<USHNPCLocomotionAnimInstance> NewLocomotionInstance, bool ForceReplacement, float TransitionDuration, float TransitionDelay, int32 SlotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReviveEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRevive();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocomotionAnimInstanceInitialised_BPEvent(int32 SlotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocomotionAnimInstanceChanged_BPEvent(int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeathEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveEndBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnAnimInstanceStateDataUpdated();
    
public:
    UFUNCTION(BlueprintPure)
    FName GetLocomotionTag(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetLocomotionChangeAlpha(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    USHNPCLocomotionAnimInstance* GetLocomotionAnimInstance(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    FName GetChangeLocomotionSnapshotName(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    USHAnimComponent* GetAnimComponent() const;
    
};

