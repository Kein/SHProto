#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_MeatHealth.generated.h"

UCLASS()
class SHPROTO_API UEnvQueryTest_MeatHealth : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 TargetChunkCount;
    
public:
    UEnvQueryTest_MeatHealth();

};

