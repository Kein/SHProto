#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESavePointFilterId.h"
#include "SavePointInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSavePointInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESavePointFilterId Filter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MinorDisplayTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    SHPROTO_API FSavePointInfo();
};

