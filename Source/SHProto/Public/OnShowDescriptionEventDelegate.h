#pragma once
#include "CoreMinimal.h"
#include "OnShowDescriptionEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowDescriptionEvent, const FText&, Text);

