#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTransformationStateComponentTransformationEndedDelegate.generated.h"

class USHEnemyTransformationStateComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHEnemyTransformationStateComponentTransformationEnded, USHEnemyTransformationStateComponent*, TransformationStateComponent, bool, Interruped);

