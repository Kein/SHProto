#pragma once
#include "CoreMinimal.h"
#include "DefaultOptionValue.h"
#include "ESettingsPropertyType.h"
#include "SettingOptionHandle.h"
#include "GameplayPresetItem.generated.h"

USTRUCT()
struct FGameplayPresetItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSettingOptionHandle Name;
    
    UPROPERTY(VisibleAnywhere)
    ESettingsPropertyType Type;
    
    UPROPERTY(EditAnywhere)
    FDefaultOptionValue Value;
    
    SHPROTO_API FGameplayPresetItem();
};

