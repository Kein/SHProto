#include "GameSettings.h"

UGameSettings::UGameSettings() {
    this->DefaultLanguage = TEXT("en");
    this->DefaulAudiotLanguage = TEXT("en");
    this->WorldTravelMovie = TEXT("LoadingStarter");
    this->bUseWSADAsUINavigation = true;
    this->bShowLostPadDialogOnDesktop = true;
}


