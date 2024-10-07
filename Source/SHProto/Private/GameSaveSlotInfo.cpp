#include "GameSaveSlotInfo.h"

FGameSaveSlotInfo::FGameSaveSlotInfo() {
    this->IsNewGamePlus = false;
    this->CombatDifficulty = ECombatDifficulty::Easy;
    this->PuzzlesDifficulty = EPuzzlesDifficulty::Easy;
    this->Filter = ESavePointFilterId::All;
}

