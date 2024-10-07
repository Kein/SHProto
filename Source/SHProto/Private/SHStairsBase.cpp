#include "SHStairsBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ASHStairsBase::ASHStairsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->StairsGraphicalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StairsGraphicalMesh"));
    this->StairsProxyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StairsProxyMesh"));
    this->StairsGraphicalMesh->SetupAttachment(RootComponent);
    this->StairsProxyMesh->SetupAttachment(StairsGraphicalMesh);
}


