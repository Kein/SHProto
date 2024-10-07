#pragma once
#include "CoreMinimal.h"
#include "FlowExtItem.h"
#include "FlowFragment.generated.h"

class UFlowAsset;

UCLASS(EditInlineNew)
class DIALOG_API UFlowFragment : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool _IsAChapter;
    
    UPROPERTY(EditAnywhere)
    bool _Placeholder;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    UFlowAsset* _Inner;
    
    UFlowFragment();

};

