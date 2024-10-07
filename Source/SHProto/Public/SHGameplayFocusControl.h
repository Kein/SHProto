#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayFocusControl.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class USHGameplayFocusControl : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ButtonTextBlock;
    
    USHGameplayFocusControl();

};

