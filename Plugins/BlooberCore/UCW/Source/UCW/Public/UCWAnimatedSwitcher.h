#pragma once
#include "CoreMinimal.h"
#include "CommonAnimatedSwitcher.h"
#include "OnActiveIndexChangedEventDelegate.h"
#include "UCWAnimatedSwitcher.generated.h"

UCLASS()
class UCW_API UUCWAnimatedSwitcher : public UCommonAnimatedSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAllowSwitchDuringTransition;
    
    UPROPERTY(BlueprintAssignable)
    FOnActiveIndexChangedEvent OnActiveWidgetChanged;
    
    // UUCWAnimatedSwitcher(const FObjectInitializer& ObjectInitializer);

};

