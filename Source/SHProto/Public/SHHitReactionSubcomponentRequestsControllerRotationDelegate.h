#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentRequestsControllerRotationDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHHitReactionSubcomponentRequestsControllerRotation, bool, PreventControllerRotation);

