#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimHandIKSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimHandIKSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    USHAnimHandIKSubcomp();

    UFUNCTION(BlueprintCallable)
    void StopRightHandIK(float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void StopLeftHandIK(float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void StopBothIK(float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRightHandLocation(const FVector InLoc, float interpSpeed, bool SetFullAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftHandLocation(const FVector InLoc, float interpSpeed, bool SetFullAlpha);
    
    UFUNCTION(BlueprintPure)
    bool IsRightHandIKEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeftHandIKEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightHandLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetRightHandAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLeftHandLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeftHandAlpha() const;
    
};

