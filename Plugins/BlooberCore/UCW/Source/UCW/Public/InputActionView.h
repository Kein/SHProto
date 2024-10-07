#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Components/ContentWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "InputActionView.generated.h"

UCLASS()
class UCW_API UInputActionView : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName action;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool KeyFirst;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize KeyTextSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
public:
    UInputActionView();

};

