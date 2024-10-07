#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/NoExportTypes.h"
#include "MaiEqsTest_WallMeshProject.generated.h"

UCLASS(MinimalAPI)
class UMaiEqsTest_WallMeshProject : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float ProjectDown;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectUp;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentX;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _UpVector;
    
public:
    UMaiEqsTest_WallMeshProject();

};

