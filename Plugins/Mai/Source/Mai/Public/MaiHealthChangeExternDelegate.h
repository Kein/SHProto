#pragma once
#include "CoreMinimal.h"
#include "MaiHealthChangeExternDelegate.generated.h"

class UMaiHealth;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMaiHealthChangeExtern, UMaiHealth*, healthComponent, int32, prevHealth);

