#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "DialogLineMovieSceneParams.h"
#include "DialogLineMovieSceneSection.generated.h"

UCLASS(MinimalAPI)
class UDialogLineMovieSceneSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogLineMovieSceneParams _Params;
    
    UDialogLineMovieSceneSection();

};

