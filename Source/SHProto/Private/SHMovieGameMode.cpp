#include "SHMovieGameMode.h"
#include "DialogManager.h"
#include "MovieGameModeController.h"

ASHMovieGameMode::ASHMovieGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseGameModeController = CreateDefaultSubobject<UMovieGameModeController>(TEXT("GameModeController"));
    this->DialogManager = CreateDefaultSubobject<UDialogManager>(TEXT("UDialogManager"));
}


