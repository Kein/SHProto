#include "SHAIWeapon.h"
#include "Components/SceneComponent.h"

ASHAIWeapon::ASHAIWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MeshComponent = NULL;
}


