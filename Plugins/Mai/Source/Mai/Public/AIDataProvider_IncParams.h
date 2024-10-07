#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "AIDataProvider_IncParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAI_API UAIDataProvider_IncParams : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float mod;
    
    UAIDataProvider_IncParams();

};

