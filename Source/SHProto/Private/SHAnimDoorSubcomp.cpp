#include "SHAnimDoorSubcomp.h"
#include "SHAnimMontagePlayer.h"

USHAnimDoorSubcomp::USHAnimDoorSubcomp() {
    this->Open = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("Open"));
    this->action = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("action"));
    this->InteractingDoorLockComponent = NULL;
    this->InteractingDoorAnimsComponent = NULL;
    this->InteractingDoorAttachmentActor = NULL;
}

void USHAnimDoorSubcomp::OnActionEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHAnimDoorSubcomp::OnActionBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}


