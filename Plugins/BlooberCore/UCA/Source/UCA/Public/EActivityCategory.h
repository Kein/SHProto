#pragma once
#include "CoreMinimal.h"
#include "EActivityCategory.generated.h"

UENUM(BlueprintType)
enum class EActivityCategory : uint8 {
    Progress,
    OpenEnded,
    Competitive,
    Challenge,
};

