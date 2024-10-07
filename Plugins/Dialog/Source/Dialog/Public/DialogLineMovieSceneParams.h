#pragma once
#include "CoreMinimal.h"
#include "DialogLine.h"
#include "DialogLineMovieSceneParams.generated.h"

USTRUCT(BlueprintType)
struct FDialogLineMovieSceneParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogLine _LineID;
    
    UPROPERTY(EditAnywhere)
    float _LineDuration;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideLineDuration;
    
    UPROPERTY(EditAnywhere)
    bool _FireAndForget;
    
    UPROPERTY(EditAnywhere)
    bool _Unmanaged;
    
    UPROPERTY(EditAnywhere)
    bool _CheckMarkers;
    
    DIALOG_API FDialogLineMovieSceneParams();
};

