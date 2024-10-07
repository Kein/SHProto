#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "BeingSteeringData.h"
#include "EBeingTribool.h"
#include "BeingSteering.generated.h"

class ACharacter;
class UCapsuleComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingSteering : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _EnableSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _UseCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _TestChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _ReduceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _StandYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DelayedStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DelayedStop;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EBeingTribool> _DontStop;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 _ForceStop: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FBeingSteeringData _Data;
    
protected:
    UPROPERTY(Transient)
    ACharacter* _Character;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* _SteeringCapsule;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _DetectStart;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _DetectStop;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _CurrentSpeed;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _ForcedSpeed;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _ForcedSpeedDeceleration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleAnywhere)
    bool _InstantMove;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    bool _ForceDirection;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _ForcedYaw;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _ForcedYawTolerance;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    bool _CheckMoveVelocity;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    FVector _MoveVelocity;
    
public:
    UBeingSteering(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSteering(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag_ForceStop(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag_DontStop(bool flag, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    void ForceYaw(float Yaw, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    void ForceSpeed(float Speed, float Deceleration, bool instantMove);
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedVelocity(bool Speed, bool Yaw);
    
    UFUNCTION(BlueprintCallable)
    void ClearFlag_DontStop(uint8 Priority);
    
};

