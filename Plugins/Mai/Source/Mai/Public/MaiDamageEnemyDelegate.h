#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Templates/SubclassOf.h"
#include "MaiDamageEnemyDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMaiDamageEnemy, AActor*, enemy, float, Damage, FHitResult, Hit, TSubclassOf<UDamageType>, DamageType);

