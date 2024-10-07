#pragma once
#include "CoreMinimal.h"
#include "DialogChoiceMovieSceneParams.h"
#include "DialogChoiceMovieSceneSectionTemplateParameters.generated.h"

USTRUCT()
struct FDialogChoiceMovieSceneSectionTemplateParameters : public FDialogChoiceMovieSceneParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SectionStartTime;
    
    UPROPERTY()
    float SectionEndTime;
    
    DIALOG_API FDialogChoiceMovieSceneSectionTemplateParameters();
};

