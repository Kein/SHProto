#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RigUnit_SphereTraceMultiByTraceChannelEx.generated.h"

USTRUCT(BlueprintType)
struct CHARACTERANIMATIONEXTRAS_API FRigUnit_SphereTraceMultiByTraceChannelEx : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PreferredObjectProfileName;
    
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
    
    FRigUnit_SphereTraceMultiByTraceChannelEx();
};

