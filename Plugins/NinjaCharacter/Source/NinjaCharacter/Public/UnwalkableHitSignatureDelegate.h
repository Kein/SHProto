#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "UnwalkableHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnwalkableHitSignature, const FHitResult&, Hit);

