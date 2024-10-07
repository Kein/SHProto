#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "BinkMediaPlayerMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class BLOOBERMEDIA_API UBinkMediaPlayerMovieSceneTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UBinkMediaPlayerMovieSceneTrack();

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};

