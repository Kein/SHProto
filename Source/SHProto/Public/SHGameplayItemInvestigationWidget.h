#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayItemInvestigationWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class USHGameplayItemInvestigationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemNameTextBlock;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHGameplayItemInvestigationWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnInit();
    
};

