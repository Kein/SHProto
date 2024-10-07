#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayPreset.h"
#include "GameplayPresetsConfig.generated.h"

UCLASS()
class UGameplayPresetsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<FGameplayPreset> Presets;
    
    UGameplayPresetsConfig();

    UFUNCTION()
    void PresetsToDefault();
    
};

