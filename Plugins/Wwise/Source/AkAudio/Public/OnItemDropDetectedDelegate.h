#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnItemDropDetectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDropDetected, FGuid, ItemDroppedID);

