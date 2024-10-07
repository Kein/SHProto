#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHMonsterAnimInstanceStateData.h"
#include "SHAbstractDaddyAnimInstanceStateData.generated.h"

UCLASS()
class SHPROTO_API USHAbstractDaddyAnimInstanceStateData : public USHMonsterAnimInstanceStateData {
    GENERATED_BODY()
public:
    USHAbstractDaddyAnimInstanceStateData();

    UFUNCTION(BlueprintPure)
    FVector GetBrakingSegmentLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAreOutstretchedArmsActive() const;
    
};

