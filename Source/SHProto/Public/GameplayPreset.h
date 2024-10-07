#pragma once
#include "CoreMinimal.h"
#include "GameplayPresetItem.h"
#include "GameplayPreset.generated.h"

USTRUCT(BlueprintType)
struct FGameplayPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FGameplayPresetItem> Values;
    
    SHPROTO_API FGameplayPreset();
};

