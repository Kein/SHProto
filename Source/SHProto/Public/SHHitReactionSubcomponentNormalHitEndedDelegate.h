#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentNormalHitEndedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentNormalHitEnded, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastNormalHit);

