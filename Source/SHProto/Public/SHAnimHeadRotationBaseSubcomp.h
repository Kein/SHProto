#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "Templates/SubclassOf.h"
#include "SHAnimHeadRotationBaseSubcomp.generated.h"

class UObject;
class USHAimOffsetAnimInstance;
class USceneComponent;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimHeadRotationBaseSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHAimOffsetAnimInstance* AimOffsetAnimInstanceCurrent;
    
public:
    USHAnimHeadRotationBaseSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Shared_Anim_HeadRotation_SetLookAtEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNewAimOffsetAnimInstance(TSubclassOf<USHAimOffsetAnimInstance> NewAimOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadRotationEnabled(const bool bInEnabled, float InBlendSpeed, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void ManualLookAtTarget(USceneComponent* InTargetComponent, float InBlendInSpeed, float InBlendOutSpeed);
    
    UFUNCTION(BlueprintPure)
    bool IsHeadRotationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetCurrentLookAtTarget() const;
    
};

