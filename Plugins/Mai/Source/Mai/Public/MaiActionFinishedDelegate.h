#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "MaiActionFinishedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiActionFinished, TEnumAsByte<EPawnActionResult::Type>, Result);

