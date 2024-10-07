#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RigUnit_SphereTraceByTraceChannelEx.generated.h"

USTRUCT(BlueprintType)
struct CHARACTERANIMATIONEXTRAS_API FRigUnit_SphereTraceByTraceChannelEx : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrawDebug;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHit;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitNormal;
    
    FRigUnit_SphereTraceByTraceChannelEx();
};

