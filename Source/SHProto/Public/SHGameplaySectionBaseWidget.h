#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplaySectionBaseWidget.generated.h"

class ASHCharacterPlay;
class USHGameplayMenuWidget;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplaySectionBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayMenuWidget* OwnerWidget;
    
public:
    USHGameplaySectionBaseWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivated();
    
};

