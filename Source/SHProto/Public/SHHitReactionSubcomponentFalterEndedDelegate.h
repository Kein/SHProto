#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentFalterEndedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSHHitReactionSubcomponentFalterEnded, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState, bool, IsLastFalter);

