#pragma once
#include "CoreMinimal.h"
#include "EConditionMatchType.h"
#include "DaiConditions.generated.h"

class IDaiConditionsListenerInterface;
class UDaiConditionsListenerInterface;
class UDaiCondition;

USTRUCT(BlueprintType)
struct DAI_API FDaiConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionMatchType _MatchType;
    
    UPROPERTY(EditAnywhere)
    bool _Debug;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiCondition*> _List;
    
    UPROPERTY()
    TArray<TScriptInterface<IDaiConditionsListenerInterface>> _Listeners;
    
    FDaiConditions();
};

