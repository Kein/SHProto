#pragma once
#include "CoreMinimal.h"
#include "OnWadingFootprintDelegate.generated.h"

class UFXSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWadingFootprint, UFXSystemComponent*, wadingFX);

