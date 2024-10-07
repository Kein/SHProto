#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DefaultValuesProviderInterface.h"
#include "SettingOption.h"
#include "SliderParams.h"
#include "SettingOptionsConfig.generated.h"

class USettingOptionsVisualizations;
class UStringTable;

UCLASS()
class UCSW_API USettingOptionsConfig : public UDataAsset, public IDefaultValuesProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSettingOption> Options;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSettingOption> GfxOptions;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<FName, FSliderParams> SliderParams;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStringTable> StringTable;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USettingOptionsVisualizations> Visualizations;
    
protected:
    UPROPERTY()
    TMap<FName, int32> DefaultValues;
    
public:
    USettingOptionsConfig();


    // Fix for true pure virtual functions not being implemented
};

