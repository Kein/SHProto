#include "MaiSense_Hearing.h"

UMaiSense_Hearing::UMaiSense_Hearing() {
    this->SpeedOfSound = 0.00f;
    this->DefaultMuteLevel = 1.00f;
    this->DefaultHearingCollisionChannel = ECC_GameTraceChannel4;
    this->UseNavMesh = true;
    this->CheckNavCost = true;
}

void UMaiSense_Hearing::ReportNoiseEvent(UObject* WorldContext, FVector NoiseLocation, AActor* Instigator, FName Tag, float Aggro, float NoiseRange, float MaxRange, float Loudness, AActor* IgnoreActor) {
}


