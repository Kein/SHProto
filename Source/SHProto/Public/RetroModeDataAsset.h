#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConsoleOverrideData.h"
#include "RetroModeDataAsset.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class SHPROTO_API URetroModeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> MaterialsChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConsoleOverrideData> ConsoleOverrides;
    
    URetroModeDataAsset();

};

