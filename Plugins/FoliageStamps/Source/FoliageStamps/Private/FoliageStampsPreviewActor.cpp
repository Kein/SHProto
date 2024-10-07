#include "FoliageStampsPreviewActor.h"
#include "Components/StaticMeshComponent.h"

AFoliageStampsPreviewActor::AFoliageStampsPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gizmo"));
    this->GizmoMesh = (UStaticMeshComponent*)RootComponent;
}


