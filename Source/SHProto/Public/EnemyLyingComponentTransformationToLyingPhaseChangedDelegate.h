#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToLyingPhaseChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationToLyingPhaseChanged, FName, TransformationReason);

