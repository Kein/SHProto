#include "UCAStatics.h"

UUCAStatics::UUCAStatics() {
}

void UUCAStatics::UnlockAchievement(const UObject* WorldContextObject, const FAchievementHandle Achievement) {
}

void UUCAStatics::TerminateActivity(const UObject* WorldContextObject) {
}

void UUCAStatics::StartActivity(const UObject* WorldContextObject, const FActivityHandle& Handle) {
}

void UUCAStatics::SetActualZone(const UObject* WorldContextObject, const FActivityZoneHandle Zone) {
}

void UUCAStatics::SetActivityAvailability(const UObject* WorldContextObject, const FActivityHandle& Handle, const bool bEnabled) {
}

void UUCAStatics::ResumeActivity(const UObject* WorldContextObject, const FActivityHandle& Handle) {
}

void UUCAStatics::IncrementAchievementCounter(const UObject* WorldContextObject, const FCounterHandle Counter) {
}

void UUCAStatics::EndActivity(const UObject* WorldContextObject, const FActivityHandle& Handle, EActivityOutcome Outcome) {
}

void UUCAStatics::AddAchievementCounter(const UObject* WorldContextObject, const FCounterHandle Counter, const int32 Delta) {
}

void UUCAStatics::AddAchievementCollectionGuidFromActor(const UObject* WorldContextObject, const FCollectionHandle Collection, AActor* Actor) {
}

void UUCAStatics::AddAchievementCollectionGuid(const UObject* WorldContextObject, const FCollectionHandle Collection, FGuid Guid) {
}


