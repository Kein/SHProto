#pragma once
#include "CoreMinimal.h"
#include "EStateWidgetFlags.generated.h"

UENUM(BlueprintType)
enum class EStateWidgetFlags : uint8 {
    DoNotShowOnStateChange,
    DoNotHideOnStateChange,
    DoNotDeleteAfterHide,
    AutoRemoveFromViewPort,
    EventCatcher,
};

