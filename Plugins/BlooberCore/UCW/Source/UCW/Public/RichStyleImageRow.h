#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "RichStyleImageRow.generated.h"

USTRUCT()
struct UCW_API FRichStyleImageRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    bool KeepSquereIfTight;
    
    UPROPERTY(EditAnywhere)
    bool PreserveAspect;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreCommontFontSize;
    
    FRichStyleImageRow();
};

