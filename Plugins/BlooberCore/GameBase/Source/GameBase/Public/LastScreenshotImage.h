#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "LastScreenshotImage.generated.h"

UCLASS()
class GAMEBASE_API ULastScreenshotImage : public UImage {
    GENERATED_BODY()
public:
    ULastScreenshotImage();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

