#include "BlooberNiagaraAkAudioPlayer.h"

UBlooberNiagaraAkAudioPlayer::UBlooberNiagaraAkAudioPlayer() {
    this->SoundToPlay = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
    this->bAllowLoopingOneShotSounds = false;
}


