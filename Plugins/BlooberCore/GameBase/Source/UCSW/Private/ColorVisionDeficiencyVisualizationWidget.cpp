#include "ColorVisionDeficiencyVisualizationWidget.h"

UColorVisionDeficiencyVisualizationWidget::UColorVisionDeficiencyVisualizationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Visualization_img = NULL;
    this->DynamicMaterial = NULL;
}

void UColorVisionDeficiencyVisualizationWidget::Update(const FColorVisionDeficiencyData& Data) {
}

void UColorVisionDeficiencyVisualizationWidget::Show(bool On) {
}


