#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentNormalHitStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHitReactionSubcomponentNormalHitStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsFirstActiveNormalHit, bool, InFirstNormalHit);

