#pragma once
#include "CoreMinimal.h"
#include "DialogLineMovieSceneParams.h"
#include "DialogLineMovieSceneSectionTemplateParameters.generated.h"

USTRUCT()
struct FDialogLineMovieSceneSectionTemplateParameters : public FDialogLineMovieSceneParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    float _SectionStartTime;
    
    UPROPERTY()
    float _SectionEndTime;
    
    UPROPERTY()
    float _TickResolution;
    
    DIALOG_API FDialogLineMovieSceneSectionTemplateParameters();
};

