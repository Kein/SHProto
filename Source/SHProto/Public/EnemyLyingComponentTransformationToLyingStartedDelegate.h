#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToLyingStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyLyingComponentTransformationToLyingStarted, FName, TransformationReason, float, ExpectedDuration);

