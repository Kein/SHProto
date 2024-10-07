#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogEntity.h"
#include "DialogLineLocalization.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct DIALOG_API FDialogLineLocalization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TSoftObjectPtr<UObject> _VoiceOver;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FText _Text;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FText _MenuText;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FText _SpeakerName;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FColor _TextColor;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FDialogEntity _Speaker;
    
    FDialogLineLocalization();
};

