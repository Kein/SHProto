#pragma once
#include "CoreMinimal.h"
#include "SHSwitchesPrioritiesMusicData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FSHSwitchesPrioritiesMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SwitchesCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSoftObjectPtr<UAkSwitchValue>, int32> SwitchesPrioritiesValues;
    
    SHPROTO_API FSHSwitchesPrioritiesMusicData();
};

