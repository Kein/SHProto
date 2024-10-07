#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "DialogChoiceMovieSceneSectionTemplateParameters.h"
#include "DialogChoiceMovieSceneSectionTemplate.generated.h"

USTRUCT()
struct FDialogChoiceMovieSceneSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDialogChoiceMovieSceneSectionTemplateParameters Params;
    
    DIALOG_API FDialogChoiceMovieSceneSectionTemplate();
};

