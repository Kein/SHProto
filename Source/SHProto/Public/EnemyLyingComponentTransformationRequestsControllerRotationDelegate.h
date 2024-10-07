#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationRequestsControllerRotationDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationRequestsControllerRotation, bool, PreventControllerRotation);

