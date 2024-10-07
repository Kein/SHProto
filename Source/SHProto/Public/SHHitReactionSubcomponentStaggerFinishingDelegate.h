#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStaggerFinishingDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentStaggerFinishing, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastActiveStagger);

