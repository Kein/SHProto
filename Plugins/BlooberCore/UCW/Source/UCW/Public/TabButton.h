#pragma once
#include "CoreMinimal.h"
#include "BButtonStyle.h"
#include "OnTabActivatedEventDelegate.h"
#include "OnTabDeactivatedEventDelegate.h"
#include "TextButton.h"
#include "TabButton.generated.h"

UCLASS()
class UCW_API UTabButton : public UTextButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBButtonStyle ActiveWidgetStyle;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabActivatedEvent OnTabActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabDeactivatedEvent OnTabDeactivated;
    
public:
    UTabButton();

};

