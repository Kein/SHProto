#include "SHCameraWorkStatics.h"

USHCameraWorkStatics::USHCameraWorkStatics() {
}

bool USHCameraWorkStatics::ValidateCameraAnimData(FSHCameraAnimationData CameraAnimData) {
    return false;
}

bool USHCameraWorkStatics::PlayCameraAnimation(ASHCameraAnimationExecutive* CameraAnimExe, ACharacter* Character, FSHCameraAnimationData CameraAnimData) {
    return false;
}

TArray<FVector> USHCameraWorkStatics::GetCameraPath(UMovieSceneSequence* Sequence) {
    return TArray<FVector>();
}

TArray<UMovieSceneTrack*> USHCameraWorkStatics::GetCameraAnimTracks(UMovieSceneSequence* Sequence) {
    return TArray<UMovieSceneTrack*>();
}

ASHCameraAnimationExecutive* USHCameraWorkStatics::CreateCameraAnimation(UObject* WorldContextObject, FSHCameraAnimationData CameraAnimData) {
    return NULL;
}

ASHCameraAnimationExecutive* USHCameraWorkStatics::CreateAndPlayCameraAnimation(UObject* WorldContextObject, ACharacter* Character, FSHCameraAnimationData CameraAnimData) {
    return NULL;
}


