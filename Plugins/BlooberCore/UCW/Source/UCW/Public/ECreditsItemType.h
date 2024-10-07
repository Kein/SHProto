#pragma once
#include "CoreMinimal.h"
#include "ECreditsItemType.generated.h"

UENUM(BlueprintType)
enum class ECreditsItemType : uint8 {
    Header,
    Column1,
    Column2,
    Column3,
    Image,
    Space,
    Custom0,
    Custom1,
    Custom2,
};

