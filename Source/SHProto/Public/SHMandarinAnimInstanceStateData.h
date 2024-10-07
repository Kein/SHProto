#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SHMonsterAnimInstanceStateData.h"
#include "SHMandarinAnimInstanceStateData.generated.h"

UCLASS()
class SHPROTO_API USHMandarinAnimInstanceStateData : public USHMonsterAnimInstanceStateData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTimerHandle ReEnableMovementTimerHandle;
    
public:
    USHMandarinAnimInstanceStateData();

    UFUNCTION()
    bool IsMovementCanceled();
    
};

