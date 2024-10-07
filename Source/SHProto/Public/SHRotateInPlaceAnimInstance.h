#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHRotateInPlaceAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHRotateInPlaceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool UseControllerRotationYaw;
    
public:
    USHRotateInPlaceAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUseControllerRotationYaw(bool Use);
    
    UFUNCTION(BlueprintCallable)
    void OnRotateInPlaceStopNative();
    
    UFUNCTION(BlueprintCallable)
    void OnRotateInPlaceStartNative();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeValues();
    
    UFUNCTION(BlueprintPure)
    bool IsStopImmediatelyRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCutscenePlaying() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeUsed() const;
    
};

