#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "DialogChoiceMovieSceneParams.h"
#include "DialogChoiceMovieSceneSection.generated.h"

UCLASS(MinimalAPI)
class UDialogChoiceMovieSceneSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogChoiceMovieSceneParams _Params;
    
    UDialogChoiceMovieSceneSection();

};

