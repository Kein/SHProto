#pragma once
#include "CoreMinimal.h"
#include "SHSwitchesPrioritiesEnviromentData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FSHSwitchesPrioritiesEnviromentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SwitchesCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSoftObjectPtr<UAkSwitchValue>, int32> SwitchesPrioritiesValues;
    
    SHPROTO_API FSHSwitchesPrioritiesEnviromentData();
};

