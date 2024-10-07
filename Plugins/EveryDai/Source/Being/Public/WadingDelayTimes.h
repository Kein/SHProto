#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESoundMovement.h"
#include "WadingDelayTimes.generated.h"

UCLASS(BlueprintType)
class BEING_API UWadingDelayTimes : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESoundMovement, float> DelayTimes;
    
    UWadingDelayTimes();

};

