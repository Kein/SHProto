#include "MovieSceneAkAudioEventTrack.h"

// FIXME?
// UMovieSceneAkAudioEventTrack::UMovieSceneAkAudioEventTrack(){}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}

UMovieSceneSection* UMovieSceneAkAudioEventTrack::CreateNewSection()
{
    return NULL;
}


FName UMovieSceneAkAudioEventTrack::GetTrackName() const
{
	static FName TrackName("AkAudioEvents");
	return TrackName;
}

bool UMovieSceneAkAudioEventTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
	return true;
}

