#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "DaiContext.h"
#include "ETraceableByPlayerConditions.h"
#include "ETraceableByPlayerLevel.h"
#include "IsTracebleByPlayer.generated.h"

UCLASS(EditInlineNew)
class DAI_API UIsTracebleByPlayer : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Observed;
    
    UPROPERTY(EditAnywhere)
    ETraceableByPlayerLevel _TraceLevel;
    
    UPROPERTY(EditAnywhere)
    ETraceableByPlayerConditions _TraceCondition;
    
    UIsTracebleByPlayer();

};

