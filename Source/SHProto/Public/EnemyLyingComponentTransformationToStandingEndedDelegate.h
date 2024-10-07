#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToStandingEndedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationToStandingEnded, FName, TransformationReason);

