#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHCameraAnimationData.h"
#include "SHCameraWorkStatics.generated.h"

class ACharacter;
class ASHCameraAnimationExecutive;
class UMovieSceneSequence;
class UMovieSceneTrack;
class UObject;

UCLASS(BlueprintType)
class USHCameraWorkStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHCameraWorkStatics();

    UFUNCTION(BlueprintCallable)
    static bool ValidateCameraAnimData(FSHCameraAnimationData CameraAnimData);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayCameraAnimation(ASHCameraAnimationExecutive* CameraAnimExe, ACharacter* Character, FSHCameraAnimationData CameraAnimData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetCameraPath(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> GetCameraAnimTracks(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASHCameraAnimationExecutive* CreateCameraAnimation(UObject* WorldContextObject, FSHCameraAnimationData CameraAnimData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASHCameraAnimationExecutive* CreateAndPlayCameraAnimation(UObject* WorldContextObject, ACharacter* Character, FSHCameraAnimationData CameraAnimData);
    
};

