#include "SHCharacterStatics.h"

USHCharacterStatics::USHCharacterStatics() {
}

void USHCharacterStatics::SwitchCharacterPlay(const UObject* WorldContextObject, ESHSuccessFailureEnum& Result, ASHCharacterPlay*& Character) {
}

bool USHCharacterStatics::SetActorTeam(const UObject* WorldContextObject, APawn* PawnActor, FGenericTeamId TeamID) {
    return false;
}

bool USHCharacterStatics::IsCharacterOnGround(const ACharacter* CheckedCharacter) {
    return false;
}

bool USHCharacterStatics::IsCharacterKnockedDown(const ACharacter* CheckedCharacter) {
    return false;
}

bool USHCharacterStatics::IsCharacterInSyncAction(const ACharacter* CheckedCharacter) {
    return false;
}

bool USHCharacterStatics::IsCharacterInCutscene(const ACharacter* Character) {
    return false;
}

bool USHCharacterStatics::IsCharacterDead(const ACharacter* CheckedCharacter) {
    return false;
}

FVector USHCharacterStatics::GetTrueCharacterLocation(const AActor* InCharacterActor) {
    return FVector{};
}

APawn* USHCharacterStatics::GetMariaPawn(const UObject* WorldContextObject) {
    return NULL;
}

APawn* USHCharacterStatics::GetEddiePawn(const UObject* WorldContextObject) {
    return NULL;
}

ASHCharacterPlay* USHCharacterStatics::GetCharacterPlay(const UObject* WorldContextObject) {
    return NULL;
}

bool USHCharacterStatics::CanCharacterBeFinished(const ACharacter* CheckedCharacter) {
    return false;
}


