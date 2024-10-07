#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveWidget.generated.h"

UCLASS(EditInlineNew)
class GAMEBASE_API USaveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USaveWidget();

protected:
    UFUNCTION()
    void ShowEnd();
    
};

