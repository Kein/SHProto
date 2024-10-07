#include "SHBreakableGlassFXData.h"

USHBreakableGlassFXData::USHBreakableGlassFXData() {
    this->DefaultAkEventToPlayAtHit = NULL;
    this->NiagaraSystemToPlayAtHit = NULL;
    this->NiagaraHitSystemDirectionParamName = TEXT("ImpactDirection");
    this->NiagaraHitSystemLocationParamName = TEXT("ImpactLocation");
}


