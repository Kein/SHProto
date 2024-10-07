#pragma once
#include "CoreMinimal.h"
#include "MaiCharacterEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiCharacterEvent, AActor*, Actor);

