#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimNPCMovementSubcomp.generated.h"

class AAIController;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimNPCMovementSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector DesiredMovement;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsMovingHipsForward;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AccelerationRelative;
    
    UPROPERTY(BlueprintReadOnly)
    float CircularMovementRadius;
    
    UPROPERTY(BlueprintReadOnly)
    float CircularMovementDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float AngleToDesiredRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
private:
    UPROPERTY(Transient)
    AAIController* OwnerController;
    
public:
    USHAnimNPCMovementSubcomp();

    UFUNCTION(BlueprintCallable)
    void OnTurnOnSpotAnimationEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveStartExit();
    
    UFUNCTION(BlueprintPure)
    bool IsPhysicRotationDuringAnimRootMotionAllowed();
    
};

