#include "SHItemWeaponMelee.h"
#include "SHAkItemWeaponMeleeAudioComponent.h"

ASHItemWeaponMelee::ASHItemWeaponMelee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkItemWeaponMeleeAudioComponent>(TEXT("WeaponAudioComponent"))) {
    this->MeleeAttacksDataTable = NULL;
    this->MeleeSecondaryAttacksDataTable = NULL;
    this->GroundAttackMaxViewPitch = -35.00f;
    this->StandingBehindRequiredDotProduct = -0.71f;
    this->ForceFeedbackOnDamage = NULL;
    this->CameraAnimExe = NULL;
	// FIXME
    // this->WeaponItemAudioComponent->SetupAttachment(RootComponent);
}

bool ASHItemWeaponMelee::WillKillCharacter(ACharacter* CheckedCharacter) const {
    return false;
}

bool ASHItemWeaponMelee::SlideDistanceCheck(ACharacter* CheckedCharacter, float MaxSlideDistance) const {
    return false;
}

bool ASHItemWeaponMelee::ShouldUseGroundAttack() const {
    return false;
}








bool ASHItemWeaponMelee::IsOwnerStandingBehind(ACharacter* CheckedCharacter) const {
    return false;
}

FString ASHItemWeaponMelee::GetLastUsedAttack() const {
    return TEXT("");
}

ACharacter* ASHItemWeaponMelee::GetCurrentMeleeAttackEnemyTarget() const {
    return NULL;
}

FSHCharacterPlayAttackStruct ASHItemWeaponMelee::GetAttackDataCopy(FName AttackRowName) const {
    return FSHCharacterPlayAttackStruct{};
}



