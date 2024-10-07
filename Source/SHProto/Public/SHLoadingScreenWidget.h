#pragma once
#include "CoreMinimal.h"
#include "LoadScreenWidget.h"
#include "EGameOverCause.h"
#include "SHLoadingScreenWidget.generated.h"

class UBinkMediaPlayer;
class UImage;
class ULoadingHints;
class UUE4KeyTexts;
class UWidget;

UCLASS(EditInlineNew)
class USHLoadingScreenWidget : public ULoadScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* BackgroundMovie_img;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBinkMediaPlayer> MediaPlayer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* HintText_lbl;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<ULoadingHints> LoadingHints;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UUE4KeyTexts> KeyTexts;
    
    UPROPERTY(EditAnywhere)
    FString KeyTagText;
    
    UPROPERTY(EditAnywhere)
    FString SeparatorText;
    
    UPROPERTY(EditDefaultsOnly)
    float HintMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName QTEHoldTip;
    
    UPROPERTY(EditDefaultsOnly)
    FName QTEMashTip;
    
public:
    USHLoadingScreenWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowHint(bool Show);
    
    UFUNCTION(BlueprintPure)
    bool IsDeathReload() const;
    
    UFUNCTION(BlueprintPure)
    EGameOverCause GetDeathReason() const;
    
};

