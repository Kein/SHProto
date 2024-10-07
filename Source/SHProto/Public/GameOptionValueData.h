#pragma once
#include "CoreMinimal.h"
#include "GameOptionValueData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGameOptionValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Value;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    SHPROTO_API FGameOptionValueData();
};

