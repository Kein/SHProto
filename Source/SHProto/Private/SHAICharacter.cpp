#include "SHAICharacter.h"
#include "SHAICharacterMovementComponent.h"
#include "SHAIWeaponManagerComponent.h"
#include "SHEnemyCameraOverlapHandleComponent.h"
#include "SHFXComponent.h"

ASHAICharacter::ASHAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAICharacterMovementComponent>(TEXT("CharMoveComp"))) {
    // FIXME
    // this->PlayerCameraOverlapHandlerComponent = CreateDefaultSubobject<USHEnemyCameraOverlapHandleComponent>(TEXT("PlayerCameraOverlapHandlerComponent"));
    // this->AIWeaponManagerComponent = CreateDefaultSubobject<USHAIWeaponManagerComponent>(TEXT("AIWeaponManagerComponent"));
    // this->FXComponent = CreateDefaultSubobject<USHFXComponent>(TEXT("FXComponent"));
    this->_FinishersTable = NULL;
    this->AnimComponent = NULL;
    this->healthComponent = NULL;
    this->ReincarnationComponent = NULL;
}

void ASHAICharacter::SetDisabledPushedByPlayer(const bool bInDisable, const UObject* Object) {
}

void ASHAICharacter::SetCustomMesh(TSoftObjectPtr<USkeletalMesh> customMesh) {
}

void ASHAICharacter::SetAudioStopWhenDespawned(bool bStopAudioStopWhenDespawned) {
}

void ASHAICharacter::Revive_Implementation() {
}

void ASHAICharacter::ResetPawn() {
}

bool ASHAICharacter::PlayDeathSequenceRequest(APawn* slayer, TSoftClassPtr<ASHDeathPlayer> deathPlayerSoftClass) {
    return false;
}


bool ASHAICharacter::IsUnderObstacle() const {
    return false;
}

bool ASHAICharacter::IsUnderEnemy_Implementation() const {
    return false;
}

bool ASHAICharacter::IsPushedByPlayerDisabledBy(const UObject* Object) const {
    return false;
}

bool ASHAICharacter::IsPushedByPlayerDisabled() const {
    return false;
}

bool ASHAICharacter::IsPrimaryEnemy_Implementation() const {
    return false;
}

bool ASHAICharacter::IsLying_Implementation() const {
    return false;
}

bool ASHAICharacter::IsKnockedDown() const {
    return false;
}




FDataTableRowHandle ASHAICharacter::GetFinisherParams(AActor* victim, FGameplayTagContainer tagFilters) const {
    return FDataTableRowHandle{};
}




bool ASHAICharacter::EnforceFinisher_Implementation() const {
    return false;
}

void ASHAICharacter::DrawDeathSequenceDebug(float DeltaSeconds, TSoftClassPtr<ASHDeathPlayer> deathPlayerSoftClass) {
}

void ASHAICharacter::Die_Implementation() {
}

bool ASHAICharacter::CanBeSteppedOn_Implementation() const {
    return false;
}

bool ASHAICharacter::AllowFinisher_Implementation() const {
    return false;
}

bool ASHAICharacter::AllowDeath_Implementation() const {
    return false;
}


