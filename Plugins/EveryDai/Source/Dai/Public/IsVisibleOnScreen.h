#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "DaiContext.h"
#include "IsVisibleOnScreen.generated.h"

UCLASS(EditInlineNew)
class DAI_API UIsVisibleOnScreen : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Observed;
    
    UPROPERTY(EditAnywhere)
    float _FOVDownScale;
    
    UIsVisibleOnScreen();

};

