#include "SHItem.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "SHGameplayMapItemComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHItemEmissiveDataHelper.h"
#include "SHRaycastDetectableComponent.h"

ASHItem::ASHItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapItemComponent>(TEXT("GameplayMapObject"));
    this->EmissiveDataHelper = CreateDefaultSubobject<USHItemEmissiveDataHelper>(TEXT("EmissiveDataHelper"));
    this->bCollectDifferentItems = false;
    this->Quantity = 1;
    this->ForceGrabOnly = false;
    this->bWasCollected = false;
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
}

bool ASHItem::WasCollected() const {
    return false;
}



