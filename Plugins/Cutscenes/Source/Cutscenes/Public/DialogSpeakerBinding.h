#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "DialogSpeakerBinding.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDialogSpeakerBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectBindingID BindingID;
    
    UPROPERTY()
    UObject* DialogSpeaker;
    
    CUTSCENES_API FDialogSpeakerBinding();
};

