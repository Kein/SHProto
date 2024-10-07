#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMaiTickLOD.h"
#include "MaiTickIntervalRange.h"
#include "MaiTickLODComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiTickLODComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMaiTickLOD _TickLOD;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UActorComponent*, FMaiTickIntervalRange> _ComponentIntervals;
    
public:
    UMaiTickLODComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetComponentMaxInterval(UActorComponent* Component, float Interval);
    
};

