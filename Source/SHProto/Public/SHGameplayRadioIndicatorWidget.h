#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHGameplayRadioIndicatorWidget.generated.h"

class UImage;
class USHCharacterPlayItemsComponent;
class USHMaterialPropertyControlSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayRadioIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* NoiseImage;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHMaterialPropertyControlSettings* MaterialPropertyControlSettings;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyControlHandlers;
    
public:
    USHGameplayRadioIndicatorWidget();

protected:
    UFUNCTION()
    void ProcessOwnerCharacterItemCollectedEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
};

