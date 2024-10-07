#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionSubcomponentStateFinishingDelegate.generated.h"

class USHHitReactionState;
class USHHitReactionSubcomponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHHitReactionSubcomponentStateFinishing, USHHitReactionSubcomponent*, HitReactionComponent, USHHitReactionState*, HitReactionState);

