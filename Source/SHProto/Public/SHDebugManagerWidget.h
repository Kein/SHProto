#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHDebugManagerWidget.generated.h"

class UCanvasPanel;
class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class USHDebugManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* CharacterHP_Container;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UProgressBar* CharacterHP_PB;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CharacterHP_TB;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CharacterGhost_TB;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CharacterSpeed_TB;
    
public:
    USHDebugManagerWidget();

};

