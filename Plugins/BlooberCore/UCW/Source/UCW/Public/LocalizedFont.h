#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Fonts/SlateFontInfo.h"
#include "LocalizedFont.generated.h"

UCLASS(BlueprintType)
class UCW_API ULocalizedFont : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateFontInfo DefaultFont;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FString, FSlateFontInfo> Fonts;
    
public:
    ULocalizedFont();

};

