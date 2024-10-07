#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "StreamableLevelBatchHandle.h"
#include "StreamableLevelBatchConfig.generated.h"

UCLASS(BlueprintType)
class LEVELSTREAMING_API UStreamableLevelBatchConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevelBatchHandle Batch;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform BatchTransform;
    
    UStreamableLevelBatchConfig();

};

