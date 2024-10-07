#pragma once
#include "CoreMinimal.h"
#include "RebindingViewWidget.h"
#include "SHRebindingViewWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class USHRebindingViewWidget : public URebindingViewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Controller_img;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> MicrosoftControllerImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> PCMicrosoftControllerImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> SonyControllerImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> PCSonyControllerImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> NintendoControllerImage;
    
public:
    USHRebindingViewWidget();

};

