#pragma once
#include "CoreMinimal.h"
#include "DialogUI.h"
#include "ScriptDialogUI.generated.h"

class UFlowDialogLine;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UScriptDialogUI : public UDialogUI {
    GENERATED_BODY()
public:
    UScriptDialogUI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnUnpause();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartChoiceTimer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPause();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogLine(const FText& Text, const UFlowDialogLine* line);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginDialog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddChoice(const FText& Text, const UFlowDialogLine* line);
    
};

