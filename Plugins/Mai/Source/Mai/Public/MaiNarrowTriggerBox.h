#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "MaiNavBox.h"
#include "MaiNarrowTriggerBox.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMaiNarrowTriggerBox : public UMaiNavBox {
    GENERATED_BODY()
public:
    UMaiNarrowTriggerBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

