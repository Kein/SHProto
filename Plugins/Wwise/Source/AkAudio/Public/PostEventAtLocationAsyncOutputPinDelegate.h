#pragma once
#include "CoreMinimal.h"
#include "PostEventAtLocationAsyncOutputPinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAtLocationAsyncOutputPin, int32, PlayingID);

