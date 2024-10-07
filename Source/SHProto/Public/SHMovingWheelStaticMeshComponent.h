#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SHMovingWheelStaticMeshComponent.generated.h"

class USHPushableComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMovingWheelStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float InterpSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    bool InverseRotationDirection;
    
public:
    USHMovingWheelStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessPushingStarted(USHPushableComponent* InComponent);
    
    UFUNCTION()
    void ProcessPushingFinishedOrInterupted(USHPushableComponent* InComponent);
    
};

