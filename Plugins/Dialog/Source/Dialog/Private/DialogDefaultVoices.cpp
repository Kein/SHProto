#include "DialogDefaultVoices.h"

UDialogDefaultVoices::UDialogDefaultVoices() {
    this->_DefaultVoiceOverCulture = TEXT("en");
    this->_VoiceOverTemplate = NULL;
    this->_AddDataNameToDir = true;
    this->_AddChapterNameToDir = true;
    this->_AddDialogNameToDir = true;
    this->_AddSpeakerNameToDir = true;
}


