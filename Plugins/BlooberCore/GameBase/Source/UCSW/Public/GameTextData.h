#pragma once
#include "CoreMinimal.h"
#include "ETextSize.h"
#include "Fonts/SlateFontInfo.h"
#include "GameTextData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct UCSW_API FGameTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateFontInfo FontDefault;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* DefaultTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateFontInfo FontBold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* BoldTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateFontInfo FontDyslexic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* DyslexicTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, EditFixedSize)
    TMap<ETextSize, int32> Sizes;
    
    FGameTextData();
};

