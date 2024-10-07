#pragma once
#include "CoreMinimal.h"
#include "BeingWandererInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "NinjaCharacterMovementComponent.h"
#include "EMaiTribool.h"
#include "MaiCharacterMovementComponent.generated.h"

class UBeingMaxSpeedStat;
class UBeingSpeedModStat;
class UBeingSteering;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiCharacterMovementComponent : public UNinjaCharacterMovementComponent, public IBeingWandererInterface {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _CurrentWalkSpeed;
    
    UPROPERTY(Instanced)
    UBeingMaxSpeedStat* _MaxSpeedStat;
    
    UPROPERTY(Instanced)
    UBeingSpeedModStat* _SpeedMod;
    
    UPROPERTY(Instanced)
    UBeingSteering* _Steering;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<EMaiTribool> _AllowPhysicsRotationDuringAnimRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Acceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _CustomWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _UseCustomWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ResetPitchAndRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _CanStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _UseRMAvoidance;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    bool _HasRMLocomotion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult _MoveBlockedBy;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool _SideMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _AllowSideMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _SideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardMovementLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BackwardsMovementLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidewaysMovementLimit;
    
    UMaiCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSideMovement(bool Side);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitedSidewaysMovement(float MaximumSidewaysMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitedMovement(float MaximumForwardMovement, float MaximumBackwardMovement, float MaximumSidewaysMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitedForwardMovement(float MaximumForwardMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitedBackwardsMovement(float MaximumBackwardsMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomWalkSpeed(float newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void MoveToward(FVector move);
    
    UFUNCTION(BlueprintPure)
    float GetMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetLimitedSidewaysMovement() const;
    
    UFUNCTION(BlueprintPure)
    float GetLimitedForwardMovement() const;
    
    UFUNCTION(BlueprintPure)
    float GetLimitedBackwardsMovement() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool HasRequestedVelocity() override PURE_VIRTUAL(HasRequestedVelocity, return false;);
    
    UFUNCTION()
    FVector GetRequestedVelocity() override PURE_VIRTUAL(GetRequestedVelocity, return FVector{};);
    
};

