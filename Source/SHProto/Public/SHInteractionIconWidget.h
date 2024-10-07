#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHInteractionIconWidget.generated.h"

class UImage;
class UMaterialInterface;
class UTipTextBlock;
class UWidget;

UCLASS(EditInlineNew)
class USHInteractionIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Root_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* MainImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTipTextBlock* ActionTip_wdg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* TraversalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* DefaultMaterialWithActionKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* TraversalMaterialWithActionKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PhaseName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FocusedMaterialControlPhaseChangeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FocusedMaterialControlTargetPhase;
    
public:
    USHInteractionIconWidget();

};

