#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RaycastDetectorTraceData.h"
#include "RaycastDetectorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DETECTION_API URaycastDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URaycastDetectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProcessData(FRaycastDetectorTraceData& Data, const FVector& TraceStart, const FVector& TraceEnd);
    
    UFUNCTION(BlueprintCallable)
    void LoseDetectedObjects(FRaycastDetectorTraceData& Data);
    
};

