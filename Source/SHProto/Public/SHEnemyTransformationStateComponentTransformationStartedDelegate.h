#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTransformationStateComponentTransformationStartedDelegate.generated.h"

class USHEnemyTransformationStateComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyTransformationStateComponentTransformationStarted, USHEnemyTransformationStateComponent*, TransformationStateComponent);

