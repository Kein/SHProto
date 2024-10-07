#include "SHPuzzleDifficultyControllerActor.h"

ASHPuzzleDifficultyControllerActor::ASHPuzzleDifficultyControllerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bManagedActorsActiveInEasyDifficulty = false;
    this->bManagedActorsActiveInMediumDifficulty = false;
    this->bManagedActorsActiveInHardDifficulty = false;
}


