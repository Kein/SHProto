#pragma once
#include "CoreMinimal.h"
#include "SqueezeBelowDelegate.generated.h"

class AMaiNavLink;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSqueezeBelow, AMaiNavLink*, NavLink);

