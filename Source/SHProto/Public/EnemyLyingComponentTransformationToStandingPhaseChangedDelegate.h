#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToStandingPhaseChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationToStandingPhaseChanged, FName, TransformationReason);

