#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStaggerEndedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentStaggerEnded, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastStagger);

