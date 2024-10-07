#include "SHGameplayStatics.h"

USHGameplayStatics::USHGameplayStatics() {
}

void USHGameplayStatics::SaveAndReloadGame(const UObject* WorldContextObject, FName InAutoSaveName) {
}

void USHGameplayStatics::ReCreateChildActorChild(UChildActorComponent* ChildActorComponent, bool Force) {
}

void USHGameplayStatics::RecordInventoryState(const UObject* WorldContextObject, const FString& InContextString) {
}

void USHGameplayStatics::RecordEndingsFactorsState(const UObject* WorldContextObject, const FString& InContextString) {
}

void USHGameplayStatics::RecordCombatState(const UObject* WorldContextObject, const FString& InContextString) {
}

bool USHGameplayStatics::IsCharacterOverlappingProximitySphere(ACharacter* InCharacter, USphereComponent* InProximitySphere) {
    return false;
}

EPuzzlesDifficulty USHGameplayStatics::GetPuzzlesDifficulty(const UObject* WorldContextObject) {
    return EPuzzlesDifficulty::Easy;
}

ECombatDifficulty USHGameplayStatics::GetCombatDifficulty(const UObject* WorldContextObject) {
    return ECombatDifficulty::Easy;
}

void USHGameplayStatics::GameOver(const UObject* WorldContextObject, EGameOverCause Cause) {
}

void USHGameplayStatics::GameEnded(const UObject* WorldContextObject) {
}

void USHGameplayStatics::EnsurePlayerHasFullHealth(const UObject* WorldContextObject, const bool bInInvisibleHeal) {
}

void USHGameplayStatics::DestroyChildActorChild(UChildActorComponent* ChildActorComponent) {
}

void USHGameplayStatics::CreateAutoSave(const UObject* WorldContextObject, FName InAutoSaveName) {
}

void USHGameplayStatics::AddFutureViewLocation(const FVector& Location) {
}


