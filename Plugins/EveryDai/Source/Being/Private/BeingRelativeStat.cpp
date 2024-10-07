#include "BeingRelativeStat.h"

UBeingRelativeStat::UBeingRelativeStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_RelativeStat = false;
}

void UBeingRelativeStat::SetRelativeStat(AActor* Other, bool stat) {
}

bool UBeingRelativeStat::GetRelativeStat(AActor* Other) const {
    return false;
}

AActor* UBeingRelativeStat::GetOther() const {
    return NULL;
}


