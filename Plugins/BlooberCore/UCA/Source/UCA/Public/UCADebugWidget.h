#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "UCADebugWidget.generated.h"

class UPanelWidget;
class UUCADebugAchvItemWidget;
class UUCADebugCounterItemWidget;

UCLASS(EditInlineNew)
class UUCADebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUCADebugCounterItemWidget> CounterItemWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUCADebugAchvItemWidget> AchvItemWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* List_panel;
    
public:
    UUCADebugWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh(const FText& Value);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetOnlineSystemInfo() const;
    
};

