#pragma once
#include "CoreMinimal.h"
#include "ETabChangeCause.h"
#include "OnTabActivatedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabActivatedEvent, ETabChangeCause, ChangeCause);

