#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHLightingChannelsProfile.h"
#include "SHLightingChannelsPack.h"
#include "SHLightingChannelsStatics.generated.h"

UCLASS(BlueprintType)
class USHLightingChannelsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHLightingChannelsStatics();

    UFUNCTION(BlueprintPure)
    static FSHLightingChannelsPack GetLightingChannelsPack(const ESHLightingChannelsProfile Profile);
    
};

