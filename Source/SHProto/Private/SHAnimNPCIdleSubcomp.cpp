#include "SHAnimNPCIdleSubcomp.h"

USHAnimNPCIdleSubcomp::USHAnimNPCIdleSubcomp() {
    this->IdlePlayRate = 1.00f;
}

void USHAnimNPCIdleSubcomp::OnIdleLoopEnter() {
}

void USHAnimNPCIdleSubcomp::OnCustomIdleEnter() {
}

bool USHAnimNPCIdleSubcomp::GetShouldPlayCustomIdle() const {
    return false;
}


