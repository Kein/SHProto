#include "SHItemWeaponRanged.h"
#include "SHAkItemWeaponRangedAudioComponent.h"
#include "SHFirearmBaseDamage.h"

ASHItemWeaponRanged::ASHItemWeaponRanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkItemWeaponRangedAudioComponent>(TEXT("WeaponAudioComponent"))) {
    this->RequiredCameraBlendAlpha = 0.50f;
    this->WeaponClipSize = 0;
    this->ReloadAmmoAddedPerNotify = 0;
    this->bUseCustomInitalAmmoInWeapon = false;
    this->CustomInitalAmmoInWeapon = 0;
    this->damageClass = USHFirearmBaseDamage::StaticClass();
    this->DamageFalloffCurve = NULL;
    this->FocusGainSpeed = 1.75f;
    this->WeaponFocusAfterShoot = 0.40f;
    this->bResetFocusOnViewRotation = true;
    this->ViewRotationToResetFocus = 80.00f;
    this->bBlockGainFocusOnViewRotation = true;
    this->ViewRotationToBlockGainFocus = 25.00f;
    this->bResetFocusOnMovement = true;
    this->MovementValueToResetFocus = 5.00f;
    this->bBlockGainFocusOnMovement = false;
    this->MovementValueToBlockGainFocus = 2.50f;
    this->bLoseFocusOnMovement = false;
    this->MovementValueToLoseFocus = 4.00f;
    this->MovementLoseFocusSpeed = 0.25f;
    this->NumberOfTracesPerShoot = 1;
    this->bUseCircleUniformSpread = true;
    this->TraceRadius = 0.50f;
    this->MaxShootDistance = 7500.00f;
    this->AutoAimMaxRange = 1000.00f;
    this->AutoAimRangeToStrengthMappingCurve = NULL;
    this->CharacterRotationInputScale = 0.40f;
    this->CharacterControlRotationInterpSpeed = 10.00f;
    this->bUseReloadMovementData = false;
    this->AimCameraShake = NULL;
    this->FireCameraShake = NULL;
    this->ForceFeedbackOnFire = NULL;
    this->ForceFeedbackOnOutOfAmmo = NULL;
    this->PlayingAimCameraShake = NULL;
    this->PlayingFireCameraShake = NULL;
    this->RecoilCurveToUse = NULL;
    this->WeaponItemAudioComponent->SetupAttachment(RootComponent);
}

FSHWeaponRangedPointingData ASHItemWeaponRanged::TracePerfectForPointingData(bool bForceRefresh) {
    return FSHWeaponRangedPointingData{};
}





bool ASHItemWeaponRanged::IsFireReady() const {
    return false;
}

bool ASHItemWeaponRanged::HasWeaponAmmoInInventory() const {
    return false;
}

bool ASHItemWeaponRanged::HasAnyAmmoInClip() const {
    return false;
}

FVector ASHItemWeaponRanged::GetStartTraceLoc() const {
    return FVector{};
}

FVector ASHItemWeaponRanged::GetSpreadShootVector(const FVector2D SpreadAngles) const {
    return FVector{};
}

FVector ASHItemWeaponRanged::GetRandomEndTraceLoc() const {
    return FVector{};
}

FVector ASHItemWeaponRanged::GetPerfectShootVector() const {
    return FVector{};
}

float ASHItemWeaponRanged::GetFocusValue() const {
    return 0.0f;
}

FVector ASHItemWeaponRanged::GetEndTraceLoc(const float ShootAngle, const FVector2D SpreadAngles) const {
    return FVector{};
}

FSHWeaponRangedPointingData ASHItemWeaponRanged::GetCachedPerfectTraceCachedData() const {
    return FSHWeaponRangedPointingData{};
}


bool ASHItemWeaponRanged::CanBeReloaded() const {
    return false;
}


