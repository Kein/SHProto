#pragma once
#include "CoreMinimal.h"
#include "EBeingWalkingStance.h"
#include "Range.h"
#include "StanceRange.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FStanceRange : public FRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBeingWalkingStance _Stance;
    
    FStanceRange();
};

