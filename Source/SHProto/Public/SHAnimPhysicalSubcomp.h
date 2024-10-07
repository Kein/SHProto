#pragma once
#include "CoreMinimal.h"
#include "ConstraintMotorBlender.h"
#include "PhysicalAnimationBlender.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimPhysicalSubcomp.generated.h"

class UPhysicalAnimationComponent;
class UPhysicalAnimationProfileDA;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimPhysicalSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UPhysicalAnimationComponent* PhysicalAnimation;
    
protected:
    UPROPERTY(Transient)
    UPhysicalAnimationProfileDA* PhysicalAnimationProfilesDA;
    
    UPROPERTY(Transient)
    FPhysicalAnimationBlender PhysicalAnimationBlender;
    
    UPROPERTY(Transient)
    FConstraintMotorBlender ConstraintMotorBlender;
    
public:
    USHAnimPhysicalSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetPhysicalAnimationWeight(float PhysicalAnimationWeight);
    
};

