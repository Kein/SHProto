#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "DialogSubtitlesWidget.generated.h"

class UDialogSubtitlesLineWidget;

UCLASS(EditInlineNew)
class UDialogSubtitlesWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    TArray<UDialogSubtitlesLineWidget*> Lines;
    
public:
    UDialogSubtitlesWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveSubtitle(int32 ID);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveSubtitle(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddSubtitle(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSubtitles();
    
    UFUNCTION(BlueprintCallable)
    void AddSubtitle(int32 ID, FText speaker, FText Text, FColor Color);
    
};

