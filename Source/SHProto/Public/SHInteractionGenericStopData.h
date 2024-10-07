#pragma once
#include "CoreMinimal.h"
#include "SHInteractionStopData.h"
#include "SHInteractionGenericStopData.generated.h"

USTRUCT(BlueprintType)
struct FSHInteractionGenericStopData : public FSHInteractionStopData {
    GENERATED_BODY()
public:
    SHPROTO_API FSHInteractionGenericStopData();
};

