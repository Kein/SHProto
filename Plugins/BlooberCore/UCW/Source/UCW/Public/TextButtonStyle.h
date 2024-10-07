#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "TextButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FTextButtonStyle : public FTextBlockStyle {
    GENERATED_BODY()
public:
    FTextButtonStyle();
};

