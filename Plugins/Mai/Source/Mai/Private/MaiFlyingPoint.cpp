#include "MaiFlyingPoint.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "MaiFlyingPointComponent.h"

AMaiFlyingPoint::AMaiFlyingPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMaiFlyingPointComponent>(TEXT("Transformers"));
    this->_Transformer = (UMaiFlyingPointComponent*)RootComponent;
    this->_MarkerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MarkerMesh"));
    this->_Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
    this->_ID = 0;
    this->_Owner = NULL;
    this->_Weight = 1;
    this->_Radius = 0.00f;
    this->_MarkerMesh->SetupAttachment(RootComponent);
    this->_Text->SetupAttachment(RootComponent);
}

bool AMaiFlyingPoint::IsReachableFrom(const FVector& Location, AMaiController* User) const {
    return false;
}


