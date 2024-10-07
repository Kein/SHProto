#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UCADebugCounterItemWidget.generated.h"

UCLASS(EditInlineNew)
class UUCADebugCounterItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUCADebugCounterItemWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh(const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit(const FText& Name, const FText& Type);
    
};

