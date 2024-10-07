#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentRequestsAIBlockingDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHHitReactionSubcomponentRequestsAIBlocking, bool, BlockAI);

