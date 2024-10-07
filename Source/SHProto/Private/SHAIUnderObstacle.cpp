#include "SHAIUnderObstacle.h"

USHAIUnderObstacle::USHAIUnderObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USHAIUnderObstacle::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USHAIUnderObstacle::OnActorEndOvelap(AActor* OverlappedActor, AActor* OtherActor) {
}

bool USHAIUnderObstacle::IsUnderAnyObstacle() const {
    return false;
}

void USHAIUnderObstacle::ExitAllObstacles() {
}

void USHAIUnderObstacle::EnterUnderObctacle(AActor* obstacle) {
}

void USHAIUnderObstacle::ConditionalExitUnderObstacle(AActor* obstacle) {
}


