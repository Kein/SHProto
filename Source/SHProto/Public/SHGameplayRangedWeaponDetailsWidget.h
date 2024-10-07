#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayRangedWeaponDetailsWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class UHorizontalBox;
class USHRangedCmbSubcomp;
class USHWeaponManageCmbSubcomp;
class UTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayRangedWeaponDetailsWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHorizontalBox* NotificationTextHorizontalBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* NotificationText_CurrentAmmo;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* NotificationText_InventoryAmmo;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* NotificationText_Separator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* NoCurrrentAmmoAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* NoAnyAmmoAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NotificationTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor OriginalNotificationTextColorAndOpacity;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacterPlay;
    
public:
    USHGameplayRangedWeaponDetailsWidget();

protected:
    UFUNCTION()
    void ProcessRangedAimStateChangedEvent(USHRangedCmbSubcomp* RangedManagement);
    
    UFUNCTION()
    void ProcessEquippedWeaponModifiedEvent(USHWeaponManageCmbSubcomp* WeaponManagement);
    
};

