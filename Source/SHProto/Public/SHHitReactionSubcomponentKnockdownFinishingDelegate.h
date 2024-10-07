#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentKnockdownFinishingDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentKnockdownFinishing, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastActiveKnockdown);

