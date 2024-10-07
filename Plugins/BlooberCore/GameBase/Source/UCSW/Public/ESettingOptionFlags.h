#pragma once
#include "CoreMinimal.h"
#include "ESettingOptionFlags.generated.h"

UENUM(BlueprintType)
enum class ESettingOptionFlags : uint8 {
    BaseSetting,
    GfxOption,
    GSAOption,
    ChildProperty,
    ArtificialOption,
    PcOnly,
    ConsoleOnly,
    XSXOnly,
    NoXBox,
    MainMenuOnly,
    InGameOnly,
    CustomType,
    CustomVisibility,
    UpdateViewOnChange,
    CustomActionOnHover,
    CustomActionOnUpdate,
    Mapped,
    MappedToGSA,
    NeedPreApplyTest,
    AdvancedGSAOption,
    HasQualityValues,
    PresetOption,
};

