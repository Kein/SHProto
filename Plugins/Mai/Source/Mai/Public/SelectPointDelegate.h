#pragma once
#include "CoreMinimal.h"
#include "SelectPointDelegate.generated.h"

class AMaiPointOfInterest;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectPoint, AMaiPointOfInterest*, Point);

