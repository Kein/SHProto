#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentKnockdownStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHitReactionSubcomponentKnockdownStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsFirstActiveKnockdown, bool, InFirstKnockdown);

