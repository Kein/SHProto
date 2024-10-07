#include "SHLookAtTargetScoreFunction.h"

USHLookAtTargetScoreFunction::USHLookAtTargetScoreFunction() {
}

bool USHLookAtTargetScoreFunction::IsLookAtTargetValid(const FSHLookAtTarget& LookAtTarget) const {
    return false;
}

float USHLookAtTargetScoreFunction::GetTargetComponentDistance(const FSHLookAtTarget& LookAtTarget) const {
    return 0.0f;
}

FVector2D USHLookAtTargetScoreFunction::GetTargetComponentAngleDeltas(const FSHLookAtTarget& LookAtTarget) const {
    return FVector2D{};
}

float USHLookAtTargetScoreFunction::GetTargetActortDistance(const FSHLookAtTarget& LookAtTarget) const {
    return 0.0f;
}

FVector2D USHLookAtTargetScoreFunction::GetTargetActorAngleDeltas(const FSHLookAtTarget& LookAtTarget) const {
    return FVector2D{};
}

int32 USHLookAtTargetScoreFunction::GetLookAtTargetScore_Implementation(const FSHLookAtTarget& LookAtTarget) const {
    return 0;
}

int32 USHLookAtTargetScoreFunction::GetDefaultLookAtTargetScore(const FSHLookAtTarget& LookAtTarget) const {
    return 0;
}

ACharacter* USHLookAtTargetScoreFunction::GetCharacter() const {
    return NULL;
}

AActor* USHLookAtTargetScoreFunction::GetActorFromTarget(const FSHLookAtTarget& LookAtTarget) const {
    return NULL;
}


