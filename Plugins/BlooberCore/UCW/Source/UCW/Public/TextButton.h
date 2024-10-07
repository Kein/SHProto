#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "BButton.h"
#include "Templates/SubclassOf.h"
#include "TextButtonStyle.h"
#include "TextButton.generated.h"

class UCommonTextScrollStyle;

UCLASS()
class UCW_API UTextButton : public UBButton {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool _HasChildrenInTheSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextButtonStyle TextStyle;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoWrapText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextWrappingPolicy WrappingPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(EditAnywhere)
    float MobileFontSizeMultiplier;
    
    UTextButton();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollState();
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
};

