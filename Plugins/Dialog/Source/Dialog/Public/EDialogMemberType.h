#pragma once
#include "CoreMinimal.h"
#include "EDialogMemberType.generated.h"

UENUM(BlueprintType)
enum class EDialogMemberType : uint8 {
    UNKNOWN,
    STRING,
    OBJECT_ID,
    OBJECT_LIST,
    CONNECTION_LIST,
};

