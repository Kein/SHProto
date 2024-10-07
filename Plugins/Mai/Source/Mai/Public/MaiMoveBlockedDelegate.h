#pragma once
#include "CoreMinimal.h"
#include "MaiMoveBlockedDelegate.generated.h"

class AActor;
class USceneComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMaiMoveBlocked, AActor*, Actor, USceneComponent*, Component);

