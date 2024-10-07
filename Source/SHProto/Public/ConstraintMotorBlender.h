#pragma once
#include "CoreMinimal.h"
#include "ConstraintMotorBlender.generated.h"

USTRUCT(BlueprintType)
struct FConstraintMotorBlender {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsActive;
    
    UPROPERTY()
    TArray<FName> Constraints;
    
    UPROPERTY()
    float StrengthOnStart;
    
    UPROPERTY()
    float Strength;
    
    UPROPERTY()
    float TimeMultiplier;
    
    UPROPERTY()
    float TimeNormal;
    
    SHPROTO_API FConstraintMotorBlender();
};

