#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "HoverablePressableStyle.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct UCW_API FHoverablePressableStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* HoveredAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PressedAkEvent;
    
    FHoverablePressableStyle();
};

