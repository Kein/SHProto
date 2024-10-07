#include "MaiCharacter.h"
#include "Components/SceneComponent.h"
#include "MaiCharacterMovementComponent.h"
#include "Templates/SubclassOf.h"

AMaiCharacter::AMaiCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMaiCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->_MeshPivot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshPivot"));
    this->_MyStates = NULL;
    this->_EyesViewPoint = NULL;
    this->_EyesInLookAt = true;
    this->_DetectLongFall = false;
    this->_DetectLongFallDuration = 6.00f;
    this->_DetectLongFallTimer = 0.00f;
    this->_MeshPivot->SetupAttachment(RootComponent);
}


float AMaiCharacter::TakePointDamage_Implementation(float Damage, TSubclassOf<UDamageType> damageClass, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

void AMaiCharacter::SetGameplayTags(FGameplayTagContainer GameplayTags) {
}

void AMaiCharacter::RemoveGameplayTags(FGameplayTagContainer GameplayTags) {
}


void AMaiCharacter::LongFallDetected_Implementation() {
}

bool AMaiCharacter::IsNotMoving_Implementation() const {
    return false;
}

bool AMaiCharacter::IsDead() const {
    return false;
}

bool AMaiCharacter::IsActive() const {
    return false;
}

FVector AMaiCharacter::GetPrevLevelLocation(float minDist) const {
    return FVector{};
}

AMaiSpawner* AMaiCharacter::GetMaiSpawner() const {
    return NULL;
}

AMaiController* AMaiCharacter::GetMaiController() const {
    return NULL;
}

UMaiCharacterMovementComponent* AMaiCharacter::GetMaiCharacterMovement() const {
    return NULL;
}

FVector AMaiCharacter::getFixedGroundLocation(APawn* Pawn, const FVector& Location) {
    return FVector{};
}

FVector AMaiCharacter::getFixedCapsuleLocation(APawn* Pawn, const FVector& Location) {
    return FVector{};
}

void AMaiCharacter::EnableAttackColliders(TArray<FName> collidersTags) {
}

void AMaiCharacter::EnableActor_Implementation() {
}

void AMaiCharacter::DisableAttackColliders(TArray<FName> collidersTags) {
}

void AMaiCharacter::DisableActor_Implementation() {
}

void AMaiCharacter::Deactivate(FName Reason) {
}

void AMaiCharacter::ClearGameplayTags() {
}

void AMaiCharacter::AppendGameplayTags(FGameplayTagContainer GameplayTags) {
}

void AMaiCharacter::AIDebuggerTick_Implementation(AMaiDebugger* debugger, float DeltaSeconds) {
}

void AMaiCharacter::Activate(FName Reason) {
}



