#include "SHAudioStatesComponentSettings.h"

USHAudioStatesComponentSettings::USHAudioStatesComponentSettings() {
    this->CombatStateCooldownTime = 2.00f;
    this->DangerStateCooldownTime = 1.00f;
    this->AudioState_Calm = NULL;
    this->AudioState_Danger = NULL;
    this->AudioState_Combat = NULL;
    this->AudioState_In_Bossfight = NULL;
    this->AudioState_Out_Bossfight = NULL;
    this->AudioEvent_StopFleshLipEnviroEffect = NULL;
    this->AudioEvent_StopFleshLipMusicEffect = NULL;
    this->AudioState_In_Cutscene = NULL;
    this->AudioState_Out_Cutscene = NULL;
}


