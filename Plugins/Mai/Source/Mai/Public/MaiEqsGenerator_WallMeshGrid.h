#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsGenerator_WallMeshGrid.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MAI_API UMaiEqsGenerator_WallMeshGrid : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue _GridHalfSize;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue _SpaceBetween;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> _GenerateAround;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue _OnFloor;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue _OnWall;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue _OnCeil;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue _UpOffset;
    
    UMaiEqsGenerator_WallMeshGrid();

};

