#pragma once
#include "CoreMinimal.h"
#include "ESearchResult.generated.h"

UENUM(BlueprintType)
enum class ESearchResult : uint8 {
    Result_Success,
    Result_NothingFound,
    Result_Ambiguous,
};

