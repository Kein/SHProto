#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsGenerator_SearchActionPoints.generated.h"

class AMaiActionPoint;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class MAI_API UMaiEqsGenerator_SearchActionPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue _SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> _SearchCenter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AMaiActionPoint> _PointClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName _PointTag;
    
    UPROPERTY(EditDefaultsOnly)
    bool _CheckWeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool _CheckConditions;
    
    UMaiEqsGenerator_SearchActionPoints();

};

