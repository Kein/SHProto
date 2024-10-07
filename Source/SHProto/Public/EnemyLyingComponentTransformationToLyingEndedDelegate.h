#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToLyingEndedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationToLyingEnded, FName, TransformationReason);

