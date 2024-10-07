#pragma once
#include "CoreMinimal.h"
#include "SHVehicleMovementProcessor.h"
#include "SHBoatMovementProcessor.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHBoatMovementProcessor : public USHVehicleMovementProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bRootMotionMovementOnlyXY;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bRootMotionRotationOnlyYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RootMotionMovementScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RootMotionRotationScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MovementDragFactor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationDragValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool bPrintDebug;
    
public:
    USHBoatMovementProcessor();

};

