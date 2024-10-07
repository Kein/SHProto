#pragma once
#include "CoreMinimal.h"
#include "DebugActorDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugActor, AActor*, Actor);

