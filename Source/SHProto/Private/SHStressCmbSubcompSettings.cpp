#include "SHStressCmbSubcompSettings.h"

USHStressCmbSubcompSettings::USHStressCmbSubcompSettings() {
    this->LevelThreshold_Light = 20.00f;
    this->LevelThreshold_Medium = 50.00f;
    this->LevelThreshold_High = 95.00f;
    this->CloseEnemyClampRadius = 300.00f;
    this->DefaultReactionChance_Medium = 0.30f;
    this->AkEventReaction_Medium = NULL;
    this->DefaultReactionChance_High = 0.50f;
    this->AkEventReaction_High = NULL;
}


