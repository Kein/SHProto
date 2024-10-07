#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "DialogLineMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UDialogLineMovieSceneTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> _Sections;
    
public:
    UDialogLineMovieSceneTrack();

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    // Fix for true pure virtual functions not being implemented
};

