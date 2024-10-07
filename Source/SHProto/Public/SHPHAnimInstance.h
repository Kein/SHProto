#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstance.h"
#include "SHPHAnimInstance.generated.h"

class USHPHAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHPHAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
    USHPHAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedMultiplier(float newSpeed, float Time, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnable(bool NewLookAtEnable);
    
    UFUNCTION(BlueprintPure)
    USHPHAnimInstanceStateData* GetPHAnimInstanceStateData() const;
    
};

