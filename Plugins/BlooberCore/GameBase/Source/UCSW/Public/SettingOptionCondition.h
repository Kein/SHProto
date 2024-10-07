#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "ESettingOptionConditionAction.h"
#include "SettingOptionCondition.generated.h"

USTRUCT()
struct UCSW_API FSettingOptionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FNamedHandle Property;
    
    UPROPERTY(VisibleAnywhere)
    int32 Value;
    
    UPROPERTY(VisibleAnywhere)
    ESettingOptionConditionAction action;
    
    FSettingOptionCondition();
};

