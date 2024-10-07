#include "SHFXPukePuddleDamageSubcomp.h"

USHFXPukePuddleDamageSubcomp::USHFXPukePuddleDamageSubcomp() {
    this->Settings = NULL;
}

void USHFXPukePuddleDamageSubcomp::SetPuddleDamageBlocked(const bool IsBlock, const UObject* Object) {
}

void USHFXPukePuddleDamageSubcomp::ProcessFootstep(EFoot foot, ABeingFootstep* Footstep) {
}

bool USHFXPukePuddleDamageSubcomp::IsPuddleDamageBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXPukePuddleDamageSubcomp::IsPuddleDamageBlocked() const {
    return false;
}

int32 USHFXPukePuddleDamageSubcomp::GetPukePuddlesCount() const {
    return 0;
}

int32 USHFXPukePuddleDamageSubcomp::GetPukeActivePuddlesCount() const {
    return 0;
}


