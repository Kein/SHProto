#include "LevelStreamingDebugWidget.h"

ULevelStreamingDebugWidget::ULevelStreamingDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
}

FLinearColor ULevelStreamingDebugWidget::SelectNextLineColor(const FStreamableLevelBatch& PreviousBatch, const FStreamableLevelBatch& NextBatch, const FLinearColor& CurrentColor, const FLinearColor& FirstColor, const FLinearColor& SecondColor) {
    return FLinearColor{};
}




