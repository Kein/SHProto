#pragma once
#include "CoreMinimal.h"
#include "SettingOptionValue.generated.h"

USTRUCT()
struct UCSW_API FSettingOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FText DisplayName;
    
    UPROPERTY(VisibleAnywhere)
    FText Description;
    
    FSettingOptionValue();
};

