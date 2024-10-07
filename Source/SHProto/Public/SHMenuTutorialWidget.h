#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SHMenuTutorialWidget.generated.h"

class UMenuTutorialsConfig;
class URichTextBlock;
class USHUserButton;
class UUE4KeyTexts;

UCLASS(EditInlineNew)
class SHPROTO_API USHMenuTutorialWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> BackKeys;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMenuTutorialsConfig> TutorialsData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UUE4KeyTexts> KeyTexts;
    
    UPROPERTY(EditAnywhere)
    FString KeyTagText;
    
    UPROPERTY(EditAnywhere)
    FString SeparatorText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Healing_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* HealingAmount_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Traversal_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Window_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Melee_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* RangedWeapons_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Radio_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHUserButton* Map_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Healing_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* HealingAmount_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Traversal_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Window_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Melee_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* RangedWeapons_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Radio_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    URichTextBlock* Map_rtx;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnBack;
    
    USHMenuTutorialWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBack();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

