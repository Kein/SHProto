#pragma once
#include "CoreMinimal.h"
#include "OnDialogFinishedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogFinished, bool, Completed);

