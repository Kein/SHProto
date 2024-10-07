#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "Templates/SubclassOf.h"
#include "StyledRichTextBlock.generated.h"

class UCommonTextScrollStyle;
class UCommonTextStyle;

UCLASS()
class UCW_API UStyledRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(EditAnywhere)
    bool bCommonFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FontSize;
    
    UPROPERTY(EditAnywhere)
    float MobileTextBlockScale;
    
public:
    UStyledRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonTextStyle> InStyle);
    
};

