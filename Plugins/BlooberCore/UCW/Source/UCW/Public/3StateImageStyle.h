#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "3StateImageStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API F3StateImageStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSingleMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush NormalBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush HoveredBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush PressedBrush;
    
    F3StateImageStyle();
};

