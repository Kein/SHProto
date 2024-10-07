#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHDoorAnimationsBaseSetData.h"
#include "SHSlidingDoorAnimationsSetData.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHSlidingDoorAnimationsSetData : public USHDoorAnimationsBaseSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData Locked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData Open;
    
    USHSlidingDoorAnimationsSetData();

};

