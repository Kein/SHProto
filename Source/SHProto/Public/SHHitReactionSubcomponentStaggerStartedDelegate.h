#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStaggerStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHitReactionSubcomponentStaggerStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsFirstActiveStagger, bool, InFirstStagger);

