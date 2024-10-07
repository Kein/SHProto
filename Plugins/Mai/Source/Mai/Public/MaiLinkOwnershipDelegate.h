#pragma once
#include "CoreMinimal.h"
#include "MaiLinkOwnershipDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiLinkOwnership, APawn*, Being);

