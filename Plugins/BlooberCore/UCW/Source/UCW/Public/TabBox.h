#pragma once
#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "ETabChangeCause.h"
#include "OnPanelChangeEventDelegate.h"
#include "TabBox.generated.h"

class UAkAudioEvent;
class UTabButton;
class UWidgetSwitcher;

UCLASS()
class UCW_API UTabBox : public UHorizontalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* TabsChangeSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetSwitcher* Switcher;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnPanelChangeEvent OnPanelWillChange;
    
    UPROPERTY(BlueprintAssignable)
    FOnPanelChangeEvent OnPanelChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool WrapChangeTab;
    
    UPROPERTY(Instanced, Transient)
    TArray<UTabButton*> Tabs;
    
public:
    UTabBox();

    UFUNCTION(BlueprintCallable)
    void SetSwitcher(UWidgetSwitcher* _Switcher);
    
    UFUNCTION(BlueprintCallable)
    void SelectTab(int32 NewTab, ETabChangeCause ChangeCause);
    
    UFUNCTION(BlueprintCallable)
    void PrevTab();
    
    UFUNCTION(BlueprintCallable)
    void NextTab();
    
    UFUNCTION(BlueprintPure)
    int32 GetTabCount() const;
    
};

