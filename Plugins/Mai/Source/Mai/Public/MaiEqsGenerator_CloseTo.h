#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsGenerator_CloseTo.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MAI_API UMaiEqsGenerator_CloseTo : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector _Direction;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue _SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> _Offsets;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> _SearchCenter;
    
    UMaiEqsGenerator_CloseTo();

};

