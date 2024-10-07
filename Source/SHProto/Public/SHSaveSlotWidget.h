#pragma once
#include "CoreMinimal.h"
#include "SaveSlotListEntryWidget.h"
#include "GameSaveSlotInfo.h"
#include "SHSaveSlotWidget.generated.h"

class UDataTable;
class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class USHSaveSlotWidget : public USaveSlotListEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* Location_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* MinorLocation_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* Type_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* Date_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* Time_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* GameTime_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Location_img;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CombatDifficulty_lbl;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* PuzzlesDifficulty_lbl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SavePointInfos;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* Expand_anim;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FText> CombatDifficultyTexts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FText> PuzzlesDifficultyTexts;
    
public:
    USHSaveSlotWidget();

protected:
    UFUNCTION(BlueprintPure)
    FGameSaveSlotInfo GetGameSlotInfo() const;
    
};

