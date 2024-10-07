#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AnimEndEventDelegate.h"
#include "AnimStartEventDelegate.h"
#include "PlayAnimationData.h"
#include "SHAnimMontagePlayer.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USHAnimComponent;

UCLASS(BlueprintType)
class SHPROTO_API USHAnimMontagePlayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FAnimStartEvent MontageStartEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAnimEndEvent MontageEndEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAnimEndEvent MontageBlendingOutEvent;
    
    UPROPERTY(Instanced, Transient)
    USHAnimComponent* OwnerComponent;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* InputData;
    
    UPROPERTY(Transient)
    UAnimMontage* CurrentMontage;
    
    UPROPERTY(Transient)
    FPlayAnimationData PlayAnimationData;
    
public:
    USHAnimMontagePlayer();

    UFUNCTION(BlueprintCallable)
    bool StopRequest(const float StopBlendoutTime);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeRequest();
    
    UFUNCTION(BlueprintCallable)
    bool PlayRequest(const FPlayAnimationData& AnimData, FVector BlendSpaceInput);
    
    UFUNCTION(BlueprintCallable)
    bool PlayOrOverwriteRequest(const float StopBlendoutTime, const FPlayAnimationData& AnimData, FVector BlendSpaceInput);
    
    UFUNCTION(BlueprintCallable)
    bool PauseRequest();
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteRequest(const float StopBlendoutTime, const FPlayAnimationData& AnimData, FVector BlendSpaceInput);
    
protected:
    UFUNCTION()
    void OnAnyMontageEnd(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnAnyMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    float GetPosition() const;
    
    UFUNCTION(BlueprintPure)
    FPlayAnimationData GetPlayAnimationData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetInputData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSectionRequest(const FName NewSectionName, const float NewSectionBlendInTime, const float OldSectionBlendOutTime);
    
};

