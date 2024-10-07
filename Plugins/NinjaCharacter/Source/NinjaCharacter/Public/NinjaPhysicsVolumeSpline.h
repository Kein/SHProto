#pragma once
#include "CoreMinimal.h"
#include "NinjaPhysicsVolume.h"
#include "NinjaPhysicsVolumeSpline.generated.h"

class USplineComponent;

UCLASS()
class NINJACHARACTER_API ANinjaPhysicsVolumeSpline : public ANinjaPhysicsVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
public:
    ANinjaPhysicsVolumeSpline(const FObjectInitializer& ObjectInitializer);

};

