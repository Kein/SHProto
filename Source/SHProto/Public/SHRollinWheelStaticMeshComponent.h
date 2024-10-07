#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SHRollinWheelStaticMeshComponent.generated.h"

class USHPushableComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHRollinWheelStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float RollingWheelRadius;
    
public:
    USHRollinWheelStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void SetEnabled(USHPushableComponent* DummyComp);
    
    UFUNCTION()
    void SetDisabled(USHPushableComponent* DummyComp);
    
};

