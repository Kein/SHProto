#pragma once
#include "CoreMinimal.h"
#include "EItemInvestigationType.h"
#include "ItemInvestigationAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FItemInvestigationAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> SetupAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> InvestigationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> FinishAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> TakeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> FingersPose;
    
    UPROPERTY(BlueprintReadOnly)
    EItemInvestigationType InvestigationType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RotationSpeedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RotationSpeedMouse;
    
    SHPROTO_API FItemInvestigationAnimationData();
};

