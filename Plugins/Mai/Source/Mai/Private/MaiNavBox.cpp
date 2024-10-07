#include "MaiNavBox.h"
#include "Templates/SubclassOf.h"

UMaiNavBox::UMaiNavBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMaiNavBox::SetAreaClass(TSubclassOf<UNavArea> newAreaClass) {
}

bool UMaiNavBox::IsInArea(FVector Location, float Extent) const {
    return false;
}

void UMaiNavBox::EnableArea() {
}

void UMaiNavBox::DisableArea() {
}


