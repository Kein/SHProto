#include "CutsceneSkipSettings.h"

FCutsceneSkipSettings::FCutsceneSkipSettings() {
    this->CanBeSkipped = false;
    this->UseSkipConditions = false;
    this->WaitForStreamingConditionsCompletion = false;
}

