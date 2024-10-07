#pragma once
#include "CoreMinimal.h"
#include "MaiLightObserverChangeDelegate.generated.h"

class UMaiLightObserver;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiLightObserverChange, UMaiLightObserver*, observer);

