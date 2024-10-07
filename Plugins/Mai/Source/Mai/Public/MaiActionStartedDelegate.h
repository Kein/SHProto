#pragma once
#include "CoreMinimal.h"
#include "MaiActionStartedDelegate.generated.h"

class AMaiController;
class UMaiAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMaiActionStarted, AMaiController*, User, UMaiAction*, action);

