#pragma once
#include "CoreMinimal.h"
#include "StateWidget.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct GAMEBASE_API FStateWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* Widget;
    
    FStateWidget();
};

