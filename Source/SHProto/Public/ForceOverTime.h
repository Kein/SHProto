#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBones.h"
#include "ForceOverTime.generated.h"

USTRUCT()
struct FForceOverTime {
    GENERATED_BODY()
public:
    UPROPERTY()
    EBones bone;
    
    UPROPERTY()
    FVector Force;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    bool bDamp;
    
    UPROPERTY()
    float Damp;
    
    SHPROTO_API FForceOverTime();
};

