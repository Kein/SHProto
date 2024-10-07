#include "FoliageStampsDefinitionActor.h"
#include "Components/StaticMeshComponent.h"

AFoliageStampsDefinitionActor::AFoliageStampsDefinitionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gizmo"));
    this->GizmoMesh = (UStaticMeshComponent*)RootComponent;
    this->AllowRotation = true;
    this->UniqueName = TEXT("Stamp01");
}


