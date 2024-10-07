#pragma once
#include "CoreMinimal.h"
#include "ColorVisionVisualizationImages.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FColorVisionVisualizationImages {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> ImageMin;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> ImageMax;
    
    UCSW_API FColorVisionVisualizationImages();
};

