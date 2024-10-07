#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEqsVisitedAPScore.h"
#include "MaiEqsTest_VisitedAP.generated.h"

UCLASS()
class MAI_API UMaiEqsTest_VisitedAP : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEqsVisitedAPScore::Type> _ScoreType;
    
    UMaiEqsTest_VisitedAP();

};

