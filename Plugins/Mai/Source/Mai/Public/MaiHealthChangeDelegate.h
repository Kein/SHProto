#pragma once
#include "CoreMinimal.h"
#include "MaiHealthChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiHealthChange, int32, prevHealth);

