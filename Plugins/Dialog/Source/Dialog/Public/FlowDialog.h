#pragma once
#include "CoreMinimal.h"
#include "FlowFragment.h"
#include "Templates/SubclassOf.h"
#include "FlowDialog.generated.h"

class UFlowDialogTemplate;

UCLASS(EditInlineNew)
class DIALOG_API UFlowDialog : public UFlowFragment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFlowDialogTemplate> _TemplateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _CanBeSkipped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> _Tags;
    
    UPROPERTY(EditAnywhere)
    uint8 _Loudness;
    
    UPROPERTY(EditAnywhere)
    FString _Mastering;
    
    UPROPERTY(EditAnywhere)
    FString _Note1;
    
    UPROPERTY(EditAnywhere)
    FString _Note2;
    
    UPROPERTY(EditAnywhere)
    FString _Note3;
    
    UFlowDialog();

};

