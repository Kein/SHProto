#include "CutsceneCharacterProxy.h"
#include "Components/CapsuleComponent.h"

ACutsceneCharacterProxy::ACutsceneCharacterProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
}


