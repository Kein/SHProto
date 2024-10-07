#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProviderClassValue.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FAIDataProviderClassValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UClass* DefaultValue;
    
    FAIDataProviderClassValue();
};

