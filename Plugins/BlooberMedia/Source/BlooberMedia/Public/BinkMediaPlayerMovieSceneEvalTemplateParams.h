#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BinkMediaPlayerMovieSceneEvalTemplateParams.generated.h"

class UBinkMediaPlayer;

USTRUCT()
struct FBinkMediaPlayerMovieSceneEvalTemplateParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    FFrameNumber StartFrameOffset;
    
    BLOOBERMEDIA_API FBinkMediaPlayerMovieSceneEvalTemplateParams();
};

