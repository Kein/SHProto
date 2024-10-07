#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UCADebugAchvItemWidget.generated.h"

UCLASS(EditInlineNew)
class UUCADebugAchvItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUCADebugAchvItemWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh(const FText& Progress, bool IsUnlocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit(const FText& Name, bool singlePlaythrough, int32 Threshold, bool IsSimple);
    
};

