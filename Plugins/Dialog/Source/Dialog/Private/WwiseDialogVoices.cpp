#include "WwiseDialogVoices.h"

UWwiseDialogVoices::UWwiseDialogVoices() {
    this->_LineTextLen = 20;
    this->_ObjectPath = TEXT("\\Actor-Mixer Hierarchy\\VO\\");
    this->_WEventPath = TEXT("\\Events\\VO\\");
    this->_UEventPath = TEXT("/Game/WwiseAudio/Events/VO/");
    this->_WaveEvent = NULL;
}


