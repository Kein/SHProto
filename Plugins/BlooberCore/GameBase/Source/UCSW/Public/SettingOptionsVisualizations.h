#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SettingOptionVisualization.h"
#include "SettingOptionsVisualizations.generated.h"

UCLASS()
class UCSW_API USettingOptionsVisualizations : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSettingOptionVisualization> Options;
    
    USettingOptionsVisualizations();

};

