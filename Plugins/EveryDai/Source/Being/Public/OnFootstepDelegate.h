#pragma once
#include "CoreMinimal.h"
#include "EFoot.h"
#include "OnFootstepDelegate.generated.h"

class ABeingFootstep;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFootstep, EFoot, foot, ABeingFootstep*, Footstep);

