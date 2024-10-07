#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERaycastDetectableDistanceMethod.h"
#include "RaycastDetectableChannelConfig.generated.h"

USTRUCT(BlueprintType)
struct FRaycastDetectableChannelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(EditAnywhere)
    ERaycastDetectableDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    bool LimitDetectionRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D DetectionRange;
    
    UPROPERTY(EditAnywhere)
    bool StartEnabled;
    
    UPROPERTY(EditAnywhere)
    bool ReportEvenIfRegistered;
    
    DETECTION_API FRaycastDetectableChannelConfig();
};

