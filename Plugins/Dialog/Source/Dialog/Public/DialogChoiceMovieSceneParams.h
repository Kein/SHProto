#pragma once
#include "CoreMinimal.h"
#include "DialogChoiceSequence.h"
#include "DialogHub.h"
#include "DialogChoiceMovieSceneParams.generated.h"

USTRUCT(BlueprintType)
struct FDialogChoiceMovieSceneParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogHub _ChoiceID;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDialogChoiceSequence> _Choices;
    
    DIALOG_API FDialogChoiceMovieSceneParams();
};

