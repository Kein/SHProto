#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EItemInvestigationType.h"
#include "SHItemInvestigationMainLoopAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class SHPROTO_API USHItemInvestigationMainLoopAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float InvestigationAnimationFrame;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bInvestigationFlip;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 InvestigationFlipSide;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EItemInvestigationType InvestigationType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float InvestigationFlipPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float InvestigationFlipStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    UAnimSequence* InvestigationLoopAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool UseLoopAnimationReverse;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    UAnimSequence* InvestigationLoopAnimationReverse;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float ItemFlipCachedProgress;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float ItemFlipCurrentProgress;
    
public:
    USHItemInvestigationMainLoopAnimInstance();

};

