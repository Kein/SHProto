#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RaycastDetectableDetectEventData.generated.h"

class AActor;
class URaycastDetectableComponent;

USTRUCT(BlueprintType)
struct FRaycastDetectableDetectEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URaycastDetectableComponent* Detectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlreadyRegistered;
    
    DETECTION_API FRaycastDetectableDetectEventData();
};

