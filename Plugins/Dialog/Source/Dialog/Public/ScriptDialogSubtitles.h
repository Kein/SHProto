#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogEntity.h"
#include "DialogSubtitles.h"
#include "ScriptDialogSubtitles.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UScriptDialogSubtitles : public UDialogSubtitles {
    GENERATED_BODY()
public:
    UScriptDialogSubtitles(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveSubtitle(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClearSubtitles();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeVisibility(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddSubtitle(int32 Index, const FText& Text, const FText& speakerName, const FColor& Color, const FDialogEntity& entity);
    
};

