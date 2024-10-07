#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "DialogLineMovieSceneSharedTrack.generated.h"

USTRUCT()
struct FDialogLineMovieSceneSharedTrack : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    DIALOG_API FDialogLineMovieSceneSharedTrack();
};

