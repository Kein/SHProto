#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHNPCAnimInstanceStateData.generated.h"

UCLASS(BlueprintType, Within=SHNPCAnimInstance)
class SHPROTO_API USHNPCAnimInstanceStateData : public UObject {
    GENERATED_BODY()
public:
    USHNPCAnimInstanceStateData();

    UFUNCTION(BlueprintPure)
    float GetTurnInPlaceAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrafeAngle() const;
    
    UFUNCTION(BlueprintPure)
    void GetLookAtRotation(FRotator& OutWorldRotation, float& OutRotationAlpha) const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredStrafeAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDesiredLocalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredLocalRotationYaw() const;
    
};

