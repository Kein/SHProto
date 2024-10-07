#pragma once
#include "CoreMinimal.h"
#include "OnCoverChangedDelegate.generated.h"

class UMaiCoverComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoverChanged, UMaiCoverComponent*, cover);

