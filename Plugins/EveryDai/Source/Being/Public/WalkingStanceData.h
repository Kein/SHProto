#pragma once
#include "CoreMinimal.h"
#include "EBeingWalkType.h"
#include "WalkingStanceData.generated.h"

USTRUCT(BlueprintType)
struct FWalkingStanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBeingWalkType _Type;
    
    BEING_API FWalkingStanceData();
};

