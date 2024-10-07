#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsTest_Trace2.generated.h"

class UEnvQueryContext;

UCLASS()
class MAI_API UMaiEqsTest_Trace2 : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditDefaultsOnly)
    bool OverrideChannel;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> TraceCollisionChannel;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue TraceFromContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UMaiEqsTest_Trace2();

};

