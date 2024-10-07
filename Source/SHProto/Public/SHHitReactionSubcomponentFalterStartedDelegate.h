#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentFalterStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHitReactionSubcomponentFalterStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsFirstActiveFalter, bool, InFirstFalter);

