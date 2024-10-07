#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "UCWTextStyle.generated.h"

UCLASS(Abstract)
class UCW_API UUCWTextStyle : public UCommonTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInheritTextColor;
    
    UUCWTextStyle();

};

