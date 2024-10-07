#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "EConsumeAnalogEvent.h"
#include "UCWScrollBox.generated.h"

UCLASS()
class UCW_API UUCWScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowRightStickScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightStickScrollMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConsumeAnalogEvent ConsumeAnalogEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
public:
    UUCWScrollBox();

};

