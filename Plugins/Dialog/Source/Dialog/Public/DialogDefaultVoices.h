#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogVoices.h"
#include "DialogDefaultVoices.generated.h"

class USoundCue;

UCLASS(BlueprintType, EditInlineNew)
class DIALOG_API UDialogDefaultVoices : public UDialogVoices {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString _DefaultVoiceOverCulture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* _VoiceOverTemplate;
    
    UPROPERTY(VisibleAnywhere)
    FString _CuePathTemplate;
    
    UPROPERTY(VisibleAnywhere)
    FString _LastGenVoiceOverDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDirectoryPath _DirRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AddDataNameToDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AddChapterNameToDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AddDialogNameToDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AddSpeakerNameToDir;
    
    UDialogDefaultVoices();

};

