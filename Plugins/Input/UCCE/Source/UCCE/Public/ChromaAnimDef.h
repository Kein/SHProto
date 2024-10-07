#pragma once
#include "CoreMinimal.h"
#include "ChromaAnimDef.generated.h"

class UChromaAnimationAsset;

USTRUCT()
struct FChromaAnimDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> Keyboard;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> Mouse;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> Headset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> Mousepad;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> Keypad;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UChromaAnimationAsset> ChromaLink;
    
    UCCE_API FChromaAnimDef();
};

