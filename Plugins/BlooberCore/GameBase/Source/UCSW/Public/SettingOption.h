#pragma once
#include "CoreMinimal.h"
#include "DefaultOptionValue.h"
#include "ESettingsPropertyType.h"
#include "ESettingsWidgetType.h"
#include "SettingOptionCondition.h"
#include "SettingOptionValue.h"
#include "SettingOption.generated.h"

USTRUCT(BlueprintType)
struct UCSW_API FSettingOption {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Flags;
    
    UPROPERTY(VisibleAnywhere)
    ESettingsPropertyType PropertyType;
    
    UPROPERTY(EditAnywhere)
    FDefaultOptionValue DefaultValue;
    
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    FText DisplayName;
    
    UPROPERTY(VisibleAnywhere)
    FText Description;
    
    UPROPERTY(VisibleAnywhere)
    FText InactiveDescription;
    
    UPROPERTY(EditAnywhere)
    ESettingsWidgetType CtrlType;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSettingOptionValue> Values;
    
    UPROPERTY(VisibleAnywhere)
    FSettingOptionCondition Condition;
    
    UPROPERTY(VisibleAnywhere)
    FName HoverAction;
    
    UPROPERTY(VisibleAnywhere)
    FName UpdateAction;
    
    FSettingOption();
};

