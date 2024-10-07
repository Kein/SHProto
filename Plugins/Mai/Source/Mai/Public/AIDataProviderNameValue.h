#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProviderNameValue.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FAIDataProviderNameValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DefaultValue;
    
    FAIDataProviderNameValue();
};

