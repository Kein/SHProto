#include "BeingIgnoreMeStat.h"

UBeingIgnoreMeStat::UBeingIgnoreMeStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_IgnoreMe = false;
    this->_IsDead = false;
    this->_AlwaysMissMe = false;
}

void UBeingIgnoreMeStat::SetIsDead(bool IsDead) {
}

void UBeingIgnoreMeStat::SetIgnoreMeReason(FName Reason) {
}

void UBeingIgnoreMeStat::SetAlwaysMissMe(bool missMe) {
}

bool UBeingIgnoreMeStat::GetIsDead() const {
    return false;
}

bool UBeingIgnoreMeStat::GetIgnoreMe() const {
    return false;
}

bool UBeingIgnoreMeStat::GetAlwaysMissMe() const {
    return false;
}

void UBeingIgnoreMeStat::ClearIgnoreMeReason(FName Reason) {
}


