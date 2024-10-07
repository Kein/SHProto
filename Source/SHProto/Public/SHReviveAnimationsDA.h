#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ReviveAnimationData.h"
#include "SHReviveAnimationsDA.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHReviveAnimationsDA : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FReviveAnimationData> ReviveAnimations;
    
public:
    USHReviveAnimationsDA();

};

