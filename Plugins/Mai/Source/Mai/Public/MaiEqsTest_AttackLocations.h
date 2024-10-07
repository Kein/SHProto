#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "MaiEqsTest_AttackLocations.generated.h"

class UEnvQueryContext;

UCLASS()
class MAI_API UMaiEqsTest_AttackLocations : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> _Enemy;
    
    UMaiEqsTest_AttackLocations();

};

