#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "UCWStyleBase.h"
#include "UCWButtonStyle.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, BlueprintType)
class UCW_API UUCWButtonStyle : public UUCWStyleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSingleMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush SingleMaterialBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush NormalBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush HoveredBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush FocusedBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush PressedBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush DisabledBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateColor NormalForeground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateColor HoveredForeground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateColor FocusedForeground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateColor PressedForeground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateColor DisabledForeground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin PressedPadding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* HoveredAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* PressedAkEvent;
    
    UUCWButtonStyle();

};

