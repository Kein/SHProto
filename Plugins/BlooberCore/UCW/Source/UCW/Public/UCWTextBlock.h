#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Templates/SubclassOf.h"
#include "UCWTextBlock.generated.h"

class UCommonTextScrollStyle;
class UCommonTextStyle;

UCLASS()
class UCW_API UUCWTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInheritTextColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoCollapseWithEmptyText;
    
    UPROPERTY(EditAnywhere)
    float MobileFontSizeMultiplier;
    
public:
    UUCWTextBlock();

protected:
    UFUNCTION(BlueprintCallable)
    void SetWrapTextWidth(int32 InWrapTextAt);
    
    UFUNCTION(BlueprintCallable)
    void SetTextCase(bool bUseAllCaps);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonTextStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollState();
    
};

