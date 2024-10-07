#pragma once
#include "CoreMinimal.h"
#include "SHItemInvestigationAnimsData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSHItemInvestigationAnimsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SetupAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> InvestigationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> FinishAnimation;
    
    SHPROTO_API FSHItemInvestigationAnimsData();
};

