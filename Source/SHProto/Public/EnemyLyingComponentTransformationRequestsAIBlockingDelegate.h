#pragma once
#include "CoreMinimal.h"
#include "EnemyLyingComponentTransformationRequestsAIBlockingDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyLyingComponentTransformationRequestsAIBlocking, bool, BlockAI);

