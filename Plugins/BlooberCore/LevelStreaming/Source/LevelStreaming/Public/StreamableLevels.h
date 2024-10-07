#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "StreamableLevel.h"
#include "StreamableLevelBatch.h"
#include "StreamableLevels.generated.h"

class UWorld;

UCLASS(BlueprintType)
class LEVELSTREAMING_API UStreamableLevels : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDirectoryPath> AllowedDirectories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> WhitelistedLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> BlacklistedLevels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FStreamableLevel> Levels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FStreamableLevelBatch> Batches;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestrictBatchPostfixes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> AllowedBatchPostfixes;
    
public:
    UStreamableLevels();

};

