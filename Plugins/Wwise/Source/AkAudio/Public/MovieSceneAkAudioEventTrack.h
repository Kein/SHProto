#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS()
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    // FIXME?
    // UMovieSceneAkAudioEventTrack();
    
    virtual UMovieSceneSection* CreateNewSection() override;
    virtual bool SupportsMultipleRows() const override { return true; }
    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual FName GetTrackName() const override;

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

};

