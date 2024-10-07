#pragma once
#include "CoreMinimal.h"
#include "ESplineMoveResult.h"
#include "SplineMoveFinishedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSplineMoveFinished, ESplineMoveResult, Result);

