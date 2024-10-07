#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERaycastDetectorDistanceMethod.h"
#include "RaycastDetectorTraceData.generated.h"

USTRUCT(BlueprintType)
struct DETECTION_API FRaycastDetectorTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawDebugTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor DebugTraceColorMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor DebugTraceColorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugSphereSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaycastDetectorDistanceMethod DistanceMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreOwner;
    
    FRaycastDetectorTraceData();
};

