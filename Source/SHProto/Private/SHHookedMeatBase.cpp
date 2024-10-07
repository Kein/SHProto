#include "SHHookedMeatBase.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SHAkHookedMeatComponent.h"
#include "Templates/SubclassOf.h"

ASHHookedMeatBase::ASHHookedMeatBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MainSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainSkeletalMesh"));
    this->SHAkHookedMeatComponent = CreateDefaultSubobject<USHAkHookedMeatComponent>(TEXT("SHAkHookedMeatComponent"));
    this->RenderTargetAtlasIndex = 0;
    this->SplineDistance = 0.00f;
    this->ActionOffset = 0.00f;
    this->TraceLength = 25.00f;
    this->TraceOffset = 0.00f;
    this->bIsPushedByEddie = false;
    this->bObliterateOnAnyDamage = false;
    this->MainSkeletalMesh->SetupAttachment(RootComponent);
    this->SHAkHookedMeatComponent->SetupAttachment(RootComponent);
}

bool ASHHookedMeatBase::ShouldPushLeft(const AActor* Target, const FVector AttackPosition) const {
    return false;
}


bool ASHHookedMeatBase::IsFullyDestroyed() const {
    return false;
}


TArray<FName> ASHHookedMeatBase::GetExistingChildBones(const FName& InParentBoneName) const {
    return TArray<FName>();
}

FVector ASHHookedMeatBase::GetEddieCoverPosition(const AActor* Target) const {
    return FVector{};
}

FVector ASHHookedMeatBase::GetDesiredEddieMeatPushPosition(const AActor* EddieActor) const {
    return FVector{};
}



void ASHHookedMeatBase::BreakAllBones() {
}

bool ASHHookedMeatBase::ApplyDamageToBone(const FName& InBoneName, const FVector& HitFromDirection, const TSubclassOf<UDamageType>& InDamageTypeClass) {
    return false;
}


