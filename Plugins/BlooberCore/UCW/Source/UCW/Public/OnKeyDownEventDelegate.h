#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "OnKeyDownEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyDownEvent, const FGeometry&, MyGeometry, const FKeyEvent&, InKeyEvent);

