#include "SHItemWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "SHAkItemWeaponBaseAudioComponent.h"

ASHItemWeapon::ASHItemWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("Mesh"))) {
    // FIXME
    //this->WeaponItemAudioComponent = CreateDefaultSubobject<USHAkItemWeaponBaseAudioComponent>(TEXT("WeaponAudioComponent"));
    //this->Mesh->SetupAttachment(RootComponent);
    //this->WeaponItemAudioComponent->SetupAttachment(RootComponent);
    this->AutoUnequipTime = 7.50f;
    this->AutoUnequipTimeInWater = 1.50f;
    this->TargetingMinViewDotProduct = 0.00f;
    this->TargetingAngleScoreCurve = NULL;
    this->TargetingDistanceScoreCurve = NULL;
    this->bUseWeaponMovementSet = false;
}

void ASHItemWeapon::SetMeshHidden(const bool InWantHidden, const UObject* Object) {
}

bool ASHItemWeapon::IsMeshHidden() const {
    return false;
}

bool ASHItemWeapon::HasEnabledAnyDebug() const {
    return false;
}


