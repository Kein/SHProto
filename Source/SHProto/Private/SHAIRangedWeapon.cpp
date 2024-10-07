#include "SHAIRangedWeapon.h"
#include "Components/SkeletalMeshComponent.h"

ASHAIRangedWeapon::ASHAIRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->MeshComponent->SetupAttachment(RootComponent);
}


