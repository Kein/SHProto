#pragma once
#include "CoreMinimal.h"
#include "DialogChoiceObserver.h"
#include "DialogLineSequenceObserver.generated.h"

class UMovieSceneSequencePlayer;

UCLASS()
class DIALOG_API UDialogLineSequenceObserver : public UDialogChoiceObserver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UMovieSceneSequencePlayer* _Player;
    
    UDialogLineSequenceObserver();

};

