#include "MaiCoverUser.h"

UMaiCoverUser::UMaiCoverUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Enabled = false;
}

bool UMaiCoverUser::IsInFullCover(FGameplayTag Filter) const {
    return false;
}

bool UMaiCoverUser::IsInCover(FGameplayTag Filter) const {
    return false;
}


