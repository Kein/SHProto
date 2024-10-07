#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_InvestigationFlipEnd.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API UAnimNotify_InvestigationFlipEnd : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FlipSide;
    
    UAnimNotify_InvestigationFlipEnd();

};

