#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "DialogLineMovieSceneSectionTemplateParameters.h"
#include "DialogLineMovieSceneSectionTemplate.generated.h"

USTRUCT()
struct FDialogLineMovieSceneSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDialogLineMovieSceneSectionTemplateParameters Params;
    
    DIALOG_API FDialogLineMovieSceneSectionTemplate();
};

