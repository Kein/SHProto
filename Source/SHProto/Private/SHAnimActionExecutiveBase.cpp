#include "SHAnimActionExecutiveBase.h"

USHAnimActionExecutiveBase::USHAnimActionExecutiveBase() {
    this->OwnerCharacter = NULL;
}

void USHAnimActionExecutiveBase::Start() {
}






ACharacter* USHAnimActionExecutiveBase::GetOwnerCharacter() const {
    return NULL;
}

UObject* USHAnimActionExecutiveBase::GetContextObject() const {
    return NULL;
}

void USHAnimActionExecutiveBase::Finish(bool Success) {
}

void USHAnimActionExecutiveBase::Abort() {
}


