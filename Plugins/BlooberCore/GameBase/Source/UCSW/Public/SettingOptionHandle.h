#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "SettingOptionHandle.generated.h"

USTRUCT(BlueprintType)
struct UCSW_API FSettingOptionHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FSettingOptionHandle();
};

