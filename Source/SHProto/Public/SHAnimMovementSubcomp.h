#pragma once
#include "CoreMinimal.h"
#include "ELocomotionState.h"
#include "SHAnimMovementSubcompSettings.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimMovementSubcomp.generated.h"

class USHCharAnimationInstance;
class USHLocomotionAnimInstance;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimMovementSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName CustomLocomotionGraphTag;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName CustomChangeLocomotionSnapshotName;
    
protected:
    UPROPERTY(Transient)
    USHLocomotionAnimInstance* LocomotionAnimInstanceCurrent;
    
    UPROPERTY(Transient)
    USHCharAnimationInstance* MainCharAnimationInstance;
    
    UPROPERTY()
    FSHAnimMovementSubcompSettings Settings;
    
public:
    USHAnimMovementSubcomp();

    UFUNCTION(BlueprintPure)
    bool ShouldMove() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldLookOnAimWalk() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovementInput() const;
    
    UFUNCTION(BlueprintPure)
    USHLocomotionAnimInstance* GetLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    ELocomotionState GetLocomotionAnimationState() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPlayInvestigationAnim() const;
    
};

