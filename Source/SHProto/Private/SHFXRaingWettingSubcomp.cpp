#include "SHFXRaingWettingSubcomp.h"

USHFXRaingWettingSubcomp::USHFXRaingWettingSubcomp() {
}

void USHFXRaingWettingSubcomp::SetWetDryFactor(float InWetFactor) {
}

void USHFXRaingWettingSubcomp::SetWadingAltitudeWorld(float WadingHeight) {
}

void USHFXRaingWettingSubcomp::SetWadingAltitudeRelative(float WadingHeight) {
}

void USHFXRaingWettingSubcomp::SetRainSplashesBlocked(const bool IsBlock, const UObject* Object) {
}

void USHFXRaingWettingSubcomp::SetRainingBlocked(const bool IsBlock, const UObject* Object) {
}

void USHFXRaingWettingSubcomp::SetRainDripSpawnRate(float InSpawnRate) {
}

void USHFXRaingWettingSubcomp::SetRainDrippingBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHFXRaingWettingSubcomp::IsRainSplashesBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainSplashesBlocked() const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainingBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainingBlocked() const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainDrippingBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainDrippingBlocked() const {
    return false;
}

bool USHFXRaingWettingSubcomp::IsRainDrippingActive() {
    return false;
}

bool USHFXRaingWettingSubcomp::IsInRainZone() const {
    return false;
}

float USHFXRaingWettingSubcomp::GetWetDryFactor() const {
    return 0.0f;
}

float USHFXRaingWettingSubcomp::GetWadingAltitude() const {
    return 0.0f;
}

UNiagaraComponent* USHFXRaingWettingSubcomp::GetSpawnedRainDrippingNiagaraComponent() {
    return NULL;
}

float USHFXRaingWettingSubcomp::GetDripIntensityValue() const {
    return 0.0f;
}

float USHFXRaingWettingSubcomp::GetCurvesEvaluateTimer() const {
    return 0.0f;
}


