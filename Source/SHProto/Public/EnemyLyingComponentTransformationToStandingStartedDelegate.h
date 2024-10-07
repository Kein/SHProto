#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationToStandingStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyLyingComponentTransformationToStandingStarted, FName, TransformationReason, float, ExpectedDuration);

