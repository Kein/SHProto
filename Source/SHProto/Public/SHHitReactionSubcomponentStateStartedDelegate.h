#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStateStartedDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHHitReactionSubcomponentStateStarted, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState);

