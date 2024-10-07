#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SHCrosshairContainerWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class USHCrosshairWidgetBase;
class USHWeaponManageCmbSubcomp;

UCLASS(EditInlineNew)
class SHPROTO_API USHCrosshairContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* ContainerPanel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHCrosshairWidgetBase> GameplayCenterDotClass;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHCrosshairWidgetBase* CurrentCrosshairWidget;
    
public:
    USHCrosshairContainerWidget();

protected:
    UFUNCTION()
    void ProcessEquippedWeaponModifiedEvent(USHWeaponManageCmbSubcomp* WeaponManagement);
    
};

