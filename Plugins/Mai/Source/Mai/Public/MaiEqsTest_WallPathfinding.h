#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EMaiEnvTestPathfinding.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsTest_WallPathfinding.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class MAI_API UMaiEqsTest_WallPathfinding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EMaiEnvTestPathfinding::Type> _TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> _Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue _PathFromContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderBoolValue _SkipUnreachable;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue _SearchRadius;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool _StraightPath;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> _FilterClass;
    
    UMaiEqsTest_WallPathfinding();

};

