#pragma once
#include "CoreMinimal.h"
#include "DialogVoices.h"
#include "WwiseDialogVoices.generated.h"

class UAkAudioEvent;
class UFlowDialogLine;
class UObject;

UCLASS(EditInlineNew)
class DIALOG_API UWwiseDialogVoices : public UDialogVoices {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _LineTextLen;
    
    UPROPERTY(VisibleAnywhere)
    FString _ObjectPath;
    
    UPROPERTY(VisibleAnywhere)
    FString _WEventPath;
    
    UPROPERTY(VisibleAnywhere)
    FString _UEventPath;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _WaveEvent;
    
    UPROPERTY()
    TMap<UFlowDialogLine*, UObject*> _PreloadedVoiceOvers;
    
public:
    UWwiseDialogVoices();

};

