#include "MaiSense_The6thSense.h"
#include "Perception/AIPerceptionTypes.h"

UMaiSense_The6thSense::UMaiSense_The6thSense() {
    this->NotifyType = EAISenseNotifyType::OnPerceptionChange;
}

void UMaiSense_The6thSense::Report6thSenseEvent(UObject* WorldContext, FName Tag, bool Enable, AActor* Instigator, float power) {
}

void UMaiSense_The6thSense::Report6thSenseConstEvent(UObject* WorldContext, FName Tag, bool Enable, AActor* Instigator, FVector Location, float power) {
}


