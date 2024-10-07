#pragma once
#include "CoreMinimal.h"
#include "ESubtitleBackground.h"
#include "ESubtitleColor.h"
#include "ETextFont.h"
#include "ETextSize.h"
#include "SubtitleData.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool ShowSubtitles;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowNonVerbalCaptions;
    
    UPROPERTY(BlueprintReadOnly)
    bool SubtitleNames;
    
    UPROPERTY(BlueprintReadOnly)
    ETextSize Size;
    
    UPROPERTY(BlueprintReadOnly)
    ETextFont Font;
    
    UPROPERTY(BlueprintReadOnly)
    ESubtitleColor Color;
    
    UPROPERTY(BlueprintReadOnly)
    ESubtitleBackground SubtitleBackground;
    
    UCSW_API FSubtitleData();
};

