#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "Blueprint/UserWidget.h"
#include "EStruggleInputSize.h"
#include "SHGameplayStruggleWidget.generated.h"

class UCanvasPanel;
class UTipTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayStruggleWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUE4InputHandle InputHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStruggleInputSize, float> InputScaleMultipliers;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* CanvasPanel_MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* CanvasPanel_InputContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTipTextBlock* TipTextBlock_ActionTip;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* LoopAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim_Success;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim_Fail;
    
public:
    USHGameplayStruggleWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInstantHide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
};

