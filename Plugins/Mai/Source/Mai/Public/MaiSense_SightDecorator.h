#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaiSense_SightDecorator.generated.h"

class AActor;
class UMaiSenseDebugger;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSense_SightDecorator : public UActorComponent {
    GENERATED_BODY()
public:
    UMaiSense_SightDecorator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInSight(AActor* Actor, UMaiSenseDebugger* debugger) const;
    
};

