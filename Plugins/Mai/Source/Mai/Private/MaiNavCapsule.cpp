#include "MaiNavCapsule.h"
#include "Templates/SubclassOf.h"

UMaiNavCapsule::UMaiNavCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMaiNavCapsule::SetAreaClass(TSubclassOf<UNavArea> newAreaClass) {
}

bool UMaiNavCapsule::IsInArea(FVector Location, float Extent) const {
    return false;
}

void UMaiNavCapsule::EnableArea() {
}

void UMaiNavCapsule::DisableArea() {
}


