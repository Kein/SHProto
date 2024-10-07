#include "MaiNavSphere.h"
#include "Templates/SubclassOf.h"

UMaiNavSphere::UMaiNavSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMaiNavSphere::SetAreaClass(TSubclassOf<UNavArea> newAreaClass) {
}

bool UMaiNavSphere::IsInArea(FVector Location, float Extent) const {
    return false;
}

void UMaiNavSphere::EnableArea() {
}

void UMaiNavSphere::DisableArea() {
}


