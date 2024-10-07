#include "SHMainMenuWidget.h"

USHMainMenuWidget::USHMainMenuWidget() {
    this->SwitchUserKeys.AddDefaulted(2);
    this->IsDemo = false;
    this->FocusSpawnPointListKeys.AddDefaulted(3);
    this->Continue_but = NULL;
    this->NewGame_but = NULL;
    this->Load_but = NULL;
    this->Settings_but = NULL;
    this->Quit_but = NULL;
    this->SpawnPointsPanel_wdg = NULL;
    this->SpawnPoints_wdg = NULL;
    this->BackgroundMovie_img = NULL;
    this->NGInfoDialog = NULL;
}


bool USHMainMenuWidget::BeginNewGameFromSpawnPoint(UMovieConfig* Movie, float NonSkippableLen) {
    return false;
}

bool USHMainMenuWidget::BeginGameFromSpawnPointHandle(const FSpawnPointHandle& SpawnPointHandle, UMovieConfig* Movie, float NonSkippableLen, bool IsNewGame) {
    return false;
}

void USHMainMenuWidget::BeginGameFromSpawnPoint(const FSpawnPointData& SpawnPointData, UMovieConfig* Movie, float NonSkippableLen, bool IsNewGame) {
}

void USHMainMenuWidget::BeginCustomLevel(const FStreamableLevelHandle& LevelHandle) {
}


