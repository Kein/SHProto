#pragma once
#include "CoreMinimal.h"
#include "PerceivePointDelegate.generated.h"

class AMaiPointOfInterest;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPerceivePoint, AMaiPointOfInterest*, Point, bool, notice);

