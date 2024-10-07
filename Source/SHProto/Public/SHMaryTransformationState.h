#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHMaryTransformationState.h"
#include "SHEnemyTransformationState.h"
#include "SHMaryTransformationStateCurves.h"
#include "SHMaryTransformationState.generated.h"

UCLASS()
class SHPROTO_API USHMaryTransformationState : public USHEnemyTransformationState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESHMaryTransformationState MaryTransformationState;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainRotation;
    
    UPROPERTY(EditAnywhere)
    FVector GrabPointSearchOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrides;
    
    UPROPERTY(EditAnywhere)
    FSHMaryTransformationStateCurves TransformationCurveOverrides;
    
public:
    USHMaryTransformationState();

    UFUNCTION(BlueprintPure)
    void GetTransformationOverrides(bool& OutShouldBeUsed, FSHMaryTransformationStateCurves& OutCurves) const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldRotationBeMaintained() const;
    
    UFUNCTION(BlueprintPure)
    ESHMaryTransformationState GetMaryTransformationState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrabPointSearchOffset() const;
    
};

