#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHTraceData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TraceEnd;
    
    FSHTraceData();
};

