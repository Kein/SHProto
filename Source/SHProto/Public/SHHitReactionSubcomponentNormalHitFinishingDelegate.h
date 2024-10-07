#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentNormalHitFinishingDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentNormalHitFinishing, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastActiveNormalHit);

