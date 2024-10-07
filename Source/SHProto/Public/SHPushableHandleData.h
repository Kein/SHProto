#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPushableHandleData.generated.h"

USTRUCT(BlueprintType)
struct FSHPushableHandleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector IconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimSpotSecureFrontTraceDistance;
    
    SHPROTO_API FSHPushableHandleData();
};

