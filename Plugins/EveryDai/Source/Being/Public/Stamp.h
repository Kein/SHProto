#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StampPath.h"
#include "Stamp.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FStamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStampPath> _Paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _TargetLocation;
    
    FStamp();
};

