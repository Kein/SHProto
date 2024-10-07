#pragma once
#include "CoreMinimal.h"
#include "FlowFragment.h"
#include "FlowQuestFragment.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowQuestFragment : public UFlowFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _Hidden;
    
    UFlowQuestFragment();

};

