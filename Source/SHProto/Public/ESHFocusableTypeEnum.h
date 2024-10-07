#pragma once
#include "CoreMinimal.h"
#include "ESHFocusableTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHFocusableTypeEnum : uint8 {
    None,
    Input,
    SingleItem,
};

