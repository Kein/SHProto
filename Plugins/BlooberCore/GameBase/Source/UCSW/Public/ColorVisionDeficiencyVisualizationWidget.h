#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "Blueprint/UserWidget.h"
#include "ColorVisionDeficiencyData.h"
#include "ColorVisionVisualizationImages.h"
#include "ColorVisionDeficiencyVisualizationWidget.generated.h"

class UImage;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class UCSW_API UColorVisionDeficiencyVisualizationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<EColorVisionDeficiency, FColorVisionVisualizationImages> Images;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Visualization_img;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicMaterial;
    
public:
    UColorVisionDeficiencyVisualizationWidget();

    UFUNCTION(BlueprintCallable)
    void Update(const FColorVisionDeficiencyData& Data);
    
    UFUNCTION(BlueprintCallable)
    void Show(bool On);
    
};

