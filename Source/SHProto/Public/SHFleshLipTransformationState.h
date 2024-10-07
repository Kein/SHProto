#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHFleshLipTransformationState.h"
#include "SHEnemyTransformationState.h"
#include "SHFleshLipTransformationStateCurves.h"
#include "SHFleshLipTransformationState.generated.h"

UCLASS()
class SHPROTO_API USHFleshLipTransformationState : public USHEnemyTransformationState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESHFleshLipTransformationState FleshLipTransformationState;
    
    UPROPERTY(EditAnywhere)
    FVector GrabPointSearchOffset;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrides;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipTransformationStateCurves TransformationCurveOverrides;
    
public:
    USHFleshLipTransformationState();

    UFUNCTION(BlueprintPure)
    void GetTransformationOverrides(bool& OutShouldBeUsed, FSHFleshLipTransformationStateCurves& OutCurves) const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldRotationBeMaintained() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrabPointSearchOffset() const;
    
    UFUNCTION(BlueprintPure)
    ESHFleshLipTransformationState GetFleshLipTransformationState() const;
    
};

