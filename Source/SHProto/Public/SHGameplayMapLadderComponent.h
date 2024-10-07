#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapLadderComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayMapLadderComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
    USHGameplayMapLadderComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
};

