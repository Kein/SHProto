#pragma once
#include "CoreMinimal.h"
#include "SettingOptionVisualizationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSettingOptionVisualizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly)
    FText ValueDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UCSW_API FSettingOptionVisualizationData();
};

