#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "EHubType.h"
#include "FlowExtItem.h"
#include "Templates/SubclassOf.h"
#include "FlowHub.generated.h"

class UFlowHubTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowHub : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowHubTemplate> _TemplateClass;
    
    UPROPERTY(EditAnywhere)
    EHubType _Type;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly, Transient)
    FDialogObjectID _LastSelection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _ShowOneOption;
    
    UFlowHub();

};

