#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "EWidgetState.h"
#include "FancyLabelStyle.h"
#include "FancyLabelBox.generated.h"

UCLASS()
class UCW_API UFancyLabelBox : public UBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EWidgetState State;
    
    // FIXME
    // UPROPERTY()
    // FGetWidgetState StateDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFancyLabelStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InheritColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InheritImages;
    
    UFancyLabelBox();

};

