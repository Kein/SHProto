#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "AIDataProviderClassValue.h"
#include "AIDataProviderNameValue.h"
#include "MaiEqsGenerator_ActionPoints.generated.h"

UCLASS(EditInlineNew)
class MAI_API UMaiEqsGenerator_ActionPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderClassValue _PointClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderNameValue _PointTag;
    
    UMaiEqsGenerator_ActionPoints();

};

