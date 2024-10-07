#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStateEndedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHHitReactionSubcomponentStateEnded, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState);

