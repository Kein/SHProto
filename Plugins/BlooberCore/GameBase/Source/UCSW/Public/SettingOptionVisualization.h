#pragma once
#include "CoreMinimal.h"
#include "SettingOptionVisualization.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UCSW_API FSettingOptionVisualization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<TSoftObjectPtr<UTexture2D>> ValueImages;
    
    FSettingOptionVisualization();
};

