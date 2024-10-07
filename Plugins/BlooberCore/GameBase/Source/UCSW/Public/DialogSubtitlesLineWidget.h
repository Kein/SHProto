#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SubtitleData.h"
#include "DialogSubtitlesLineWidget.generated.h"

class UBorder;
class UGameTextsConfig;
class UStyledRichTextBlock;

UCLASS(EditInlineNew)
class UDialogSubtitlesLineWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* Speaker_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* Text_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBorder* Text_border;
    
    UPROPERTY(EditDefaultsOnly)
    UGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundSolid;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundTransparent;
    
    UPROPERTY(Transient)
    FText speaker;
    
    UPROPERTY(Transient)
    FText Text;
    
public:
    UDialogSubtitlesLineWidget();

    UFUNCTION(BlueprintCallable)
    void SetText4Test(FText NewSpeaker, FText NewText, FLinearColor Color, const FSubtitleData& Config);
    
    UFUNCTION(BlueprintCallable)
    void SetText(int32 _ID, FText NewSpeaker, FText NewText, FColor Color);
    
    UFUNCTION(BlueprintPure)
    bool HasText() const;
    
    UFUNCTION(BlueprintPure)
    bool HasId(int32 _ID) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

