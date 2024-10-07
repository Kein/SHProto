#include "SpawnPointsListWidget.h"

USpawnPointsListWidget::USpawnPointsListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemWidgetClass = NULL;
    this->Items_box = NULL;
}



bool USpawnPointsListWidget::HasData() const {
    return false;
}

void USpawnPointsListWidget::ForEachSpawnPointData() {
}


