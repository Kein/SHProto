#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UCWButtonStyle.h"
#include "UCWTextButtonStyle.generated.h"

class UCommonTextStyle;

UCLASS(Abstract)
class UCW_API UUCWTextButtonStyle : public UUCWButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSingleTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInheritTextColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> NormalTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> HoveredTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> FocusedTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> PressedTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> DisabledTextStyle;
    
    UUCWTextButtonStyle();

    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetNormalTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetHoveredTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetFocusedTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetDisabledTextStyle() const;
    
};

