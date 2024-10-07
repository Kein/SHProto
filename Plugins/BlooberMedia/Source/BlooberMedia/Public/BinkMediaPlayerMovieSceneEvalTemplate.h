#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "BinkMediaPlayerMovieSceneEvalTemplateParams.h"
#include "BinkMediaPlayerMovieSceneEvalTemplate.generated.h"

USTRUCT()
struct BLOOBERMEDIA_API FBinkMediaPlayerMovieSceneEvalTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FBinkMediaPlayerMovieSceneEvalTemplateParams Params;
    
public:
    FBinkMediaPlayerMovieSceneEvalTemplate();
};

