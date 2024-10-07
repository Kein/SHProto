#pragma once
#include "CoreMinimal.h"
#include "FlowQuestFragment.h"
#include "Templates/SubclassOf.h"
#include "FlowQuest.generated.h"

class UFlowQuestTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowQuest : public UFlowQuestFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowQuestTemplate> _TemplateClass;
    
    UFlowQuest();

};

