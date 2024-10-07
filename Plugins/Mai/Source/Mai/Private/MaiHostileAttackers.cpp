#include "MaiHostileAttackers.h"
#include "Templates/SubclassOf.h"

UMaiHostileAttackers::UMaiHostileAttackers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_MaxActiveAttackers = 0;
    this->_TokenCoinsPaid = 0;
    this->_Token2Used[0] = 0;
    this->_Token2Used[1] = 0;
    this->_Token2Used[2] = 0;
    this->_Token2Used[3] = 0;
    this->_Token2Used[4] = 0;
    this->_Token2Used[5] = 0;
    this->_Token2Used[6] = 0;
    this->_Token2Used[7] = 0;
    this->_Token2Used[8] = 0;
    this->_Token2Used[9] = 0;
    this->_Token2Used[10] = 0;
    this->_Token2Used[11] = 0;
    this->_Token2Used[12] = 0;
    this->_Token2Used[13] = 0;
    this->_Token2Used[14] = 0;
    this->_Token2Used[15] = 0;
    this->_Token2Used[16] = 0;
    this->_Token2Used[17] = 0;
    this->_Token2Used[18] = 0;
    this->_Token2Used[19] = 0;
    this->_Token2Used[20] = 0;
    this->_Token2Used[21] = 0;
    this->_Token2Used[22] = 0;
    this->_Token2Used[23] = 0;
    this->_Token2Used[24] = 0;
    this->_Token2Used[25] = 0;
    this->_Token2Used[26] = 0;
    this->_Token2Used[27] = 0;
    this->_Token2Used[28] = 0;
    this->_Token2Used[29] = 0;
    this->_Token2Used[30] = 0;
    this->_Token2Used[31] = 0;
    this->_Token2StealAngle = 60.00f;
    this->_Token2StealDist = 120.00f;
    this->_Pool = 255;
    this->_Token2Pools[0] = 1;
    this->_Token2Pools[1] = 1;
    this->_Token2Pools[2] = 1;
    this->_Token2Pools[3] = 1;
    this->_Token2Pools[4] = 1;
    this->_Token2Pools[5] = 1;
    this->_Token2Pools[6] = 1;
    this->_Token2Pools[7] = 1;
    this->_Token2Pools[8] = 1;
    this->_Token2Pools[9] = 1;
    this->_Token2Pools[10] = 1;
    this->_Token2Pools[11] = 1;
    this->_Token2Pools[12] = 1;
    this->_Token2Pools[13] = 1;
    this->_Token2Pools[14] = 1;
    this->_Token2Pools[15] = 1;
    this->_Token2Pools[16] = 1;
    this->_Token2Pools[17] = 1;
    this->_Token2Pools[18] = 1;
    this->_Token2Pools[19] = 1;
    this->_Token2Pools[20] = 1;
    this->_Token2Pools[21] = 1;
    this->_Token2Pools[22] = 1;
    this->_Token2Pools[23] = 1;
    this->_Token2Pools[24] = 1;
    this->_Token2Pools[25] = 1;
    this->_Token2Pools[26] = 1;
    this->_Token2Pools[27] = 1;
    this->_Token2Pools[28] = 1;
    this->_Token2Pools[29] = 1;
    this->_Token2Pools[30] = 1;
    this->_Token2Pools[31] = 1;
}

void UMaiHostileAttackers::UpdateActiveAttackers() {
}

bool UMaiHostileAttackers::TakeToken(AActor* enemy, EMaiToken Token, const TArray<FName>& ignoreLocks, bool Force) {
    return false;
}

void UMaiHostileAttackers::TakeAttackPosition(AActor* enemy, FVector Location) {
}

void UMaiHostileAttackers::ReturnToken(AActor* enemy, bool addCooldown) {
}

void UMaiHostileAttackers::RemoveAttacker(AActor* enemy) {
}

void UMaiHostileAttackers::RemoveAllAttackers() {
}

void UMaiHostileAttackers::ReleaseAttackPosition(AActor* enemy) {
}

void UMaiHostileAttackers::OfferSlotToOthers(AActor* enemy) {
}

void UMaiHostileAttackers::LockTokensDistribution(FName Reason, bool lock) {
}

void UMaiHostileAttackers::LockTokens(FName Reason, bool lock) {
}

void UMaiHostileAttackers::IgnoreLockFor(FName Reason, AActor* enemy, bool onlyIfLocked) {
}

bool UMaiHostileAttackers::HasToken(AActor* enemy) const {
    return false;
}

bool UMaiHostileAttackers::HasOtherAttacker(AActor* enemy) const {
    return false;
}

bool UMaiHostileAttackers::HasHardLock() const {
    return false;
}

bool UMaiHostileAttackers::HasAnyAttacker() const {
    return false;
}

void UMaiHostileAttackers::HardLockTokens(FName Reason, AActor* enemy) {
}

AActor* UMaiHostileAttackers::GetTokenLockOwner() const {
    return NULL;
}

AActor* UMaiHostileAttackers::GetTokenHolder() const {
    return NULL;
}

uint8 UMaiHostileAttackers::GetSlotHoldersCount(TSubclassOf<AActor> klass) const {
    return 0;
}

UMaiHostileAttackers* UMaiHostileAttackers::getHostileAttackers(AActor* Actor) {
    return NULL;
}

uint8 UMaiHostileAttackers::GetAttackerCount() const {
    return 0;
}


void UMaiHostileAttackers::DebugAttacker() {
}

void UMaiHostileAttackers::ChangeMaxActiveAttackers(uint8 Count) {
}

void UMaiHostileAttackers::CaptureTokenLock(AActor* enemy, bool lock) {
}

bool UMaiHostileAttackers::CanHaveSlot(AActor* enemy) const {
    return false;
}

bool UMaiHostileAttackers::CanGetSlot(AActor* enemy) const {
    return false;
}

bool UMaiHostileAttackers::CanCaptureToken(AActor* enemy) const {
    return false;
}

bool UMaiHostileAttackers::AddAttacker(AActor* enemy) {
    return false;
}


