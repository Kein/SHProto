#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "InputKeyActionView.generated.h"

UCLASS()
class UCW_API UInputKeyActionView : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool ImageFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
public:
    UInputKeyActionView();

};

