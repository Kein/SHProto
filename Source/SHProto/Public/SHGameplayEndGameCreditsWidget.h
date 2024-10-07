#pragma once
#include "CoreMinimal.h"
#include "CreditsWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SHGameplayEndGameCreditsWidget.generated.h"

UCLASS(EditInlineNew)
class USHGameplayEndGameCreditsWidget : public UCreditsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate OnContinue;
    
    USHGameplayEndGameCreditsWidget();

    UFUNCTION(BlueprintCallable)
    void Continue();
    
};

