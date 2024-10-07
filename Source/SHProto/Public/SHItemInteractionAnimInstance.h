#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EItemInteractionType.h"
#include "EItemInvestigationType.h"
#include "SHItemInteractionAnimInstance.generated.h"

class UAnimSequence;
class UBlendSpace;
class UCurveFloat;

UCLASS(NonTransient)
class SHPROTO_API USHItemInteractionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EItemInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bItemTakeStartGuard;
    
    UPROPERTY(BlueprintReadOnly)
    bool bTakeItemRightHand;
    
    UPROPERTY(BlueprintReadOnly)
    float TakeItemDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float TakeItemHeight;
    
    UPROPERTY(BlueprintReadOnly)
    UBlendSpace* TakeItemBlendspace;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* ItemInHandPoseOverride;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* WeaponHandPoseOverride;
    
    UPROPERTY(BlueprintReadWrite)
    float ItemHandPoseOverrideAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvestigationStart;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvestigationEnd;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvestigationInstant;
    
    UPROPERTY(BlueprintReadWrite)
    bool bInvestigationBreak;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvestigationItemSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* InvestigationInputSpeedCurve;
    
    UPROPERTY(BlueprintReadOnly)
    float InvestigationAnimationFrame;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvestigationFlip;
    
    UPROPERTY(BlueprintReadOnly)
    int32 InvestigationFlipSide;
    
    UPROPERTY(BlueprintReadOnly)
    EItemInvestigationType InvestigationType;
    
    UPROPERTY(BlueprintReadOnly)
    float InvestigationFlipPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float InvestigationFlipStartTime;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* SetupAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* InvestigationLoopAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* FinishAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* TakeAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* FingersPose;
    
    USHItemInteractionAnimInstance();

};

