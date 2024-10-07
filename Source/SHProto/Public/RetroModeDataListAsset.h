#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RetroModeDataListAsset.generated.h"

class URetroModeDataAsset;

UCLASS(BlueprintType)
class SHPROTO_API URetroModeDataListAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<URetroModeDataAsset>> RetroModes;
    
    URetroModeDataListAsset();

};

