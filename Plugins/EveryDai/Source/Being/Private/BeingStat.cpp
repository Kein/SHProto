#include "BeingStat.h"
#include "Templates/SubclassOf.h"

UBeingStat::UBeingStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_IsUpToDate = false;
}

void UBeingStat::Update_Implementation() {
}

void UBeingStat::SetUpToDate() {
}

void UBeingStat::NeedsUpdateModifier(TSubclassOf<UDaiFloatModifier> modclass, FName Name) {
}

void UBeingStat::NeedsUpdate() {
}

bool UBeingStat::IsUpToDate() const {
    return false;
}

void UBeingStat::ForceUpdate() {
}

UDaiFloatModifier* UBeingStat::FindFloatModifier(TSubclassOf<UDaiFloatModifier> modclass, FName Name) const {
    return NULL;
}


