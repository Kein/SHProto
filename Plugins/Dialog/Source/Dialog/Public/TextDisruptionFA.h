#pragma once
#include "CoreMinimal.h"
#include "FlowAction.h"
#include "TextDisruptionFA.generated.h"

UCLASS(EditInlineNew)
class UTextDisruptionFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _EnableDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FullDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Period;
    
    UTextDisruptionFA();

};

