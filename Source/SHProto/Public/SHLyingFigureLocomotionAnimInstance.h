#pragma once
#include "CoreMinimal.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHLyingFigureLocomotionAnimInstance.generated.h"

class USHLyingFigureAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHLyingFigureLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    USHLyingFigureLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHLyingFigureAnimInstanceStateData* GetLyingFigureAnimInstanceStateData() const;
    
};

