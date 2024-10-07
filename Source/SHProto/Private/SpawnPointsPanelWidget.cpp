#include "SpawnPointsPanelWidget.h"

USpawnPointsPanelWidget::USpawnPointsPanelWidget() {
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
    this->SpawnPoints_wdg = NULL;
}


