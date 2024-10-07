#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHWaterManagerComponent.generated.h"

class AActor;
class ASHWaterVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHWaterManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHWaterVolume*> RegisteredWaterVolumes;
    
    UPROPERTY(Transient)
    AActor* TrackedActor;
    
public:
    USHWaterManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_WaterInteraction_DrawDebug();
    
    UFUNCTION(BlueprintPure)
    ASHWaterVolume* GetSimulatingWaterVolume() const;
    
};

