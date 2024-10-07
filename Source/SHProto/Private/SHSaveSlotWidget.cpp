#include "SHSaveSlotWidget.h"

USHSaveSlotWidget::USHSaveSlotWidget() {
    this->Location_lbl = NULL;
    this->MinorLocation_lbl = NULL;
    this->Type_lbl = NULL;
    this->Date_lbl = NULL;
    this->Time_lbl = NULL;
    this->GameTime_lbl = NULL;
    this->Location_img = NULL;
    this->CombatDifficulty_lbl = NULL;
    this->PuzzlesDifficulty_lbl = NULL;
    this->SavePointInfos = NULL;
    this->Expand_anim = NULL;
    this->CombatDifficultyTexts.AddDefaulted(3);
    this->PuzzlesDifficultyTexts.AddDefaulted(3);
}

FGameSaveSlotInfo USHSaveSlotWidget::GetGameSlotInfo() const {
    return FGameSaveSlotInfo{};
}


