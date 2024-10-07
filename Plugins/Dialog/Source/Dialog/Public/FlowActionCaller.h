#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelayedFlowAction.h"
#include "RunningFlowAction.h"
#include "FlowActionCaller.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UFlowActionCaller : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDelayedFlowAction> _DelayedActions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FRunningFlowAction> _RunningActions;
    
    UFlowActionCaller(const FObjectInitializer& ObjectInitializer);

};

