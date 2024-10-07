#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSection.h"
#include "BinkMediaPlayerMovieSceneSection.generated.h"

class UBinkMediaPlayer;

UCLASS()
class BLOOBERMEDIA_API UBinkMediaPlayerMovieSceneSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UBinkMediaPlayerMovieSceneSection();

};

