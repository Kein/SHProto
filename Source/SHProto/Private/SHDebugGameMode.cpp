#include "SHDebugGameMode.h"
#include "PlayGameModeController.h"
#include "SHSpawnPoint.h"

ASHDebugGameMode::ASHDebugGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnPointClass = ASHSpawnPoint::StaticClass();
    this->BaseGameModeController = CreateDefaultSubobject<UPlayGameModeController>(TEXT("GameModeController"));
    this->CaptureActor = NULL;
    this->Target = NULL;
    this->GameMenuController = NULL;
}


