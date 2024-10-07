#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "DialogChoiceMovieSceneSharedTrack.generated.h"

USTRUCT()
struct FDialogChoiceMovieSceneSharedTrack : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    DIALOG_API FDialogChoiceMovieSceneSharedTrack();
};

