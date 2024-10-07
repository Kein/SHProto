#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SHWaterVolume.generated.h"

class UObject;

UCLASS()
class SHPROTO_API ASHWaterVolume : public AVolume {
    GENERATED_BODY()
public:
    ASHWaterVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsRuntimeSimulationDisabledBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRuntimeSimulationDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableRuntimeSimulation(const bool IsDisable, const UObject* Object);
    
};

