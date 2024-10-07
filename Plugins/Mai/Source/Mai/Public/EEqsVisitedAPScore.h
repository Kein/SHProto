#pragma once
#include "CoreMinimal.h"
#include "EEqsVisitedAPScore.generated.h"

UENUM(BlueprintType)
namespace EEqsVisitedAPScore {
    enum Type {
        NullScore,
        HalfScore,
        ProgressiveScore,
    };
}

