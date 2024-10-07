#pragma once
#include "CoreMinimal.h"
#include "DialogVoiceAttenuation.h"
#include "FlowExtItem.h"
#include "Templates/SubclassOf.h"
#include "FlowEntity.generated.h"

class UFlowEntityTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowEntity : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowEntityTemplate> _TemplateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogVoiceAttenuation _VoiceAttenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _NameShortcut;
    
    UFlowEntity();

};

