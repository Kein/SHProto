#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "OnPreviewKeyDownEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FOnPreviewKeyDownEvent, const FGeometry&, MyGeometry, const FKeyEvent&, InKeyEvent);

