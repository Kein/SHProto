#pragma once
#include "CoreMinimal.h"
#include "SettingOptionHandle.h"
#include "GfxOptionHandle.generated.h"

USTRUCT(BlueprintType)
struct UCSW_API FGfxOptionHandle : public FSettingOptionHandle {
    GENERATED_BODY()
public:
    FGfxOptionHandle();
};

