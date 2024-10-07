#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "StreamableLevelHandle.h"
#include "StreamableLevelConfig.generated.h"

UCLASS(BlueprintType)
class LEVELSTREAMING_API UStreamableLevelConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevelHandle Level;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform LevelTransform;
    
    UStreamableLevelConfig();

};

