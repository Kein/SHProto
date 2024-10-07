#include "QuestObjective.h"

FQuestObjective::FQuestObjective() {
    this->_ObjectiveID = 0;
    this->_Status = EQuestStatus::UNKNOWN;
    this->_IsHidden = false;
}

