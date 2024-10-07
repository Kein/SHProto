#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "EQuestStatus.h"
#include "FlowExtItem.h"
#include "Templates/SubclassOf.h"
#include "FlowQuestObjective.generated.h"

class UFlowObjectiveTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowQuestObjective : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowObjectiveTemplate> _TemplateClass;
    
    UPROPERTY(EditAnywhere)
    FDaiConditions _SuccessConditions;
    
    UPROPERTY(EditAnywhere)
    FDaiConditions _FailureConditions;
    
    UPROPERTY(EditAnywhere)
    FDaiConditions _ClosingConditions;
    
    UPROPERTY(EditAnywhere)
    bool _Hidden;
    
    UPROPERTY(EditAnywhere)
    bool _Silent;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    EQuestStatus _Status;
    
    UFlowQuestObjective();

};

