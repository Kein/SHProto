#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHDoorStateEnum.h"
#include "SHDoorMovementBaseComponent.h"
#include "SHMakeNoiseConfig.h"
#include "SHDoorMovementComponent.generated.h"

class AActor;
class UBoxComponent;
class UCurveFloat;
class UObject;
class USHDoorMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHDoorMovementComponent : public USHDoorMovementBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHDoorMovementWithActorContextEvent, USHDoorMovementComponent*, Component, AActor*, ActorContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorMovementEventBP, USHDoorMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorMovementEvent, USHDoorMovementComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeginPlayAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClosedAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OpenedAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OpenBothSides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OtherSideOpenedAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFrozenOnBegin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FakeMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FakeMovementBlendExp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPushingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitForceMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityDecreaserMod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxMoveVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAutoclose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutocloseCharacterDetectorRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPushEnemyActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PushingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMakeNoiseConfig AutoLockedDoorCheckNoiseConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMakeNoiseConfig PlayerStartedPhysicMovementNoiseConfig;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector DoorPreHitAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bHitTurnSpirntOff;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnFakeMovementStart;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnFakeMovementInterupted;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnFakeMovementComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnPhysicMovementStart;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnPhysicMovementInterupted;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnPhysicMovementComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnDoorAngleChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnDoorStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorMovementEventBP OnFrozenChanged;
    
    UPROPERTY(Instanced, Transient)
    UBoxComponent* ManagedPreHitDetector;
    
    UPROPERTY(Transient)
    TArray<AActor*> TraceIgnoreActors;
    
    UPROPERTY(SaveGame)
    bool bIsDoorFrozen;
    
    UPROPERTY(SaveGame)
    float DoorAngleSave;
    
public:
    USHDoorMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WasPhysicMovingLastTick() const;
    
    UFUNCTION(BlueprintCallable)
    void StopCurveAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetDoorFrozen(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutocloseBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFakeOpen(const bool ToOtherside);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFakeClose();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCustomFakeMovement(const float InAngleTarget, const float InSpeed, const float InBlendExp, const bool InForceMovement);
    
    UFUNCTION(BlueprintCallable)
    void PlayCurveAnim(UCurveFloat* InCurve, bool InSkipTracing);
    
    UFUNCTION(BlueprintPure)
    bool IsPreHitOverlapingCharacterPlay() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreHitOverlapingAnyCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingCurveAnim() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoorFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutocloseBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPhysicForce() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxDoorVelocity() const;
    
    UFUNCTION(BlueprintPure)
    ESHDoorStateEnum GetFakeMovementTargetState() const;
    
    UFUNCTION(BlueprintPure)
    float GetFakeMovementTargetAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDoorTraceLoc(float DoorTraceAngle) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentDoorAngle() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPhysicForce(const float MoveForce);
    
    UFUNCTION(BlueprintCallable)
    void AddActorToTraceIgnoreActors(AActor* InActor);
    
};

