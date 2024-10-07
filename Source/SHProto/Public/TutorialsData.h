#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "TutorialsData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool Visibility;
    
    UPROPERTY(BlueprintReadOnly)
    FSlateFontInfo FontInfo;
    
    SHPROTO_API FTutorialsData();
};

