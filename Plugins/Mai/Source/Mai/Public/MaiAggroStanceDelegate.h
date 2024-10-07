#pragma once
#include "CoreMinimal.h"
#include "EMaiAggroStance.h"
#include "MaiAggroStanceDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiAggroStance, EMaiAggroStance, aggroStance);

