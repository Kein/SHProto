#pragma once
#include "CoreMinimal.h"
#include "FlowFragment.h"
#include "FlowFolder.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowFolder : public UFlowFragment {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool _EntityFolder;
    
    UFlowFolder();

};

