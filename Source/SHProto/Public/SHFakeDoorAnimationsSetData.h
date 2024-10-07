#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHDoorAnimationsBaseSetData.h"
#include "SHFakeDoorAnimationsSetData.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHFakeDoorAnimationsSetData : public USHDoorAnimationsBaseSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FPlayAnimationData> AutoLockedDoorCheckAnims;
    
    USHFakeDoorAnimationsSetData();

};

