#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpawnUniqueEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnUniqueEvent, AActor*, Actor, FGameplayTag, Tag);

