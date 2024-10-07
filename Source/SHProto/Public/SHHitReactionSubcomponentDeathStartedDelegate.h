#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentDeathStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHitReactionSubcomponentDeathStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsFirstActiveDeath, bool, InFirstDeath);

