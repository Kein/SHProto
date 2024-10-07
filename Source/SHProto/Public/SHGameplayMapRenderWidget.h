#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayMapRenderWidget.generated.h"

class ASHCharacterPlay;
class ULocalizedFont;
class USHGameplayMapBaseWidget;
class UScaleBox;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class USHGameplayMapRenderWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* MapsWidgetSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScaleBox* MapScaleBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULocalizedFont* LocalizedFont;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayMapBaseWidget* CurrentMapWidget;
    
public:
    USHGameplayMapRenderWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit();
    
};

