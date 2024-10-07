#pragma once
#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "ETabChangeCause.h"
#include "UCWTabBar.generated.h"

class UAkAudioEvent;
class UUCWTabButton;
class UUCWTabPanel;
class UUCWWidgetGroup;
class UWidgetSwitcher;

UCLASS(Blueprintable)
class UCW_API UUCWTabBar : public UHorizontalBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabSelected, UUCWTabPanel*, Panel);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetSwitcher* Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* TabsChangeSound;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUCWTabButton> TabButtonClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InnerSlotPadding;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabSelected OnTabSelected;
    
    UPROPERTY(Transient)
    UUCWWidgetGroup* TabGroup;
    
public:
    UUCWTabBar();

    UFUNCTION(BlueprintCallable)
    void SelectTab(int32 NewTab, ETabChangeCause ChangeCause);
    
    UFUNCTION(BlueprintCallable)
    void PrevTab();
    
    UFUNCTION(BlueprintCallable)
    void NextTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTabSelected(UUCWTabPanel* Panel);
    
};

