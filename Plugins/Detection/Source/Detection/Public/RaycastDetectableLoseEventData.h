#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RaycastDetectableLoseEventData.generated.h"

class AActor;
class URaycastDetectableComponent;

USTRUCT(BlueprintType)
struct FRaycastDetectableLoseEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URaycastDetectableComponent* Detectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    DETECTION_API FRaycastDetectableLoseEventData();
};

