#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyLyingComponentTransformationRequestsAIBlockingDelegate.h"
#include "EnemyLyingComponentTransformationRequestsControllerRotationDelegate.h"
#include "EnemyLyingComponentTransformationToLyingEndedDelegate.h"
#include "EnemyLyingComponentTransformationToLyingPhaseChangedDelegate.h"
#include "EnemyLyingComponentTransformationToLyingStartedDelegate.h"
#include "EnemyLyingComponentTransformationToStandingEndedDelegate.h"
#include "EnemyLyingComponentTransformationToStandingPhaseChangedDelegate.h"
#include "EnemyLyingComponentTransformationToStandingStartedDelegate.h"
#include "SHEnemyLyingComponent.generated.h"

class USHCaterpillarCapsuleComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEnemyLyingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToLyingStarted EventTransformationToLyingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToLyingPhaseChanged EventTransformationToLyingPhaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToLyingEnded EventTransformationToLyingEnded;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToStandingStarted EventTransformationToStandingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToStandingPhaseChanged EventTransformationToStandingPhaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationToStandingEnded EventTransformationToStandingEnded;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationRequestsAIBlocking EventTransformationRequestsAIBlocking;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyLyingComponentTransformationRequestsControllerRotation EventTransformationRequestsControllerRotation;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bMoveMeshPivot;
    
    UPROPERTY(EditDefaultsOnly)
    float TreatBaseMeshPivotHeightAsCapsuleScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMoveMesh;
    
    UPROPERTY(EditDefaultsOnly)
    float TreatBaseMeshHeightAsCapsuleScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoAssignLyingCapsules;
    
    UPROPERTY(EditDefaultsOnly)
    float LyingMeshAnchorMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float LyingMeshAnchorHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumLyingPitchAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumLyingPitchAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float ActorRotationToDesiredVelocityHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool ActorRotationAllowUsingCurrentVelocityHACK;
    
    UPROPERTY(Instanced)
    USHCaterpillarCapsuleComponent* LyingCapsuleComponent;
    
    UPROPERTY(Instanced)
    TArray<USHCaterpillarCapsuleComponent*> AdditionalExtendingCapsules;
    
public:
    USHEnemyLyingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransformToStanding(FName InTransformationReason, float InTransformationDuration, bool InDisableAIDuringTransformation, bool InPreventControllerRotation, bool InRotateActorToDesiredVelocity, bool InRotateActorToLyingCapsule, bool InForceRestart);
    
    UFUNCTION(BlueprintCallable)
    void TransformToLying(FName InTransformationReason, float InTransformationDuration, bool InDelayedRootRotation, bool InDisableAIDuringTransformation, bool InPreventControllerRotation, bool InRotateActorToDesiredVelocity, bool InRotateOutOfCollisionsDuringTransformation, bool InRotateOutOfCollisionsAfterTransformation, float InCapsuleAnchorPosition, float InMaximumCapsuleExtensionAlpha, bool InAlignCapsulesToSurface, bool InForceRestart);
    
    UFUNCTION(BlueprintCallable)
    void SetManuallyDisabledLyingCapsuleCollisions(bool InDisableCollisions);
    
    UFUNCTION(BlueprintCallable)
    void SetLyingCapsulePosition(float InAnchorPosition, float InMaximumExtension);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRotationAllowUsingCurrentVelocityHACK(bool InAllowVelocityHack);
    
    UFUNCTION(BlueprintCallable)
    void PostTeleportUpdate(bool InReExpandCapsules);
    
    UFUNCTION(BlueprintPure)
    bool IsTransformingIntoStanding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransformingIntoLying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransforming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransformationWantingToPreventControllerRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransformationWantingDisabledAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTransformationAwaitingDelayedRootRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStanding(bool InIncludeTransformingInto, bool InIncludeTransformingOutOf) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLying(bool InIncludeTransformingInto, bool InIncludeTransformingOutOf) const;
    
    UFUNCTION(BlueprintPure)
    float GetTransformationProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetTransformationAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingTransformationDuration() const;
    
    UFUNCTION(BlueprintPure)
    void GetLyingExtensionScalars(float& OutTopScalar, float& OutBottomScalar, bool InClamped) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishDelayedRootRotation();
    
    UFUNCTION(BlueprintCallable)
    void AssignLyingCapsule(USHCaterpillarCapsuleComponent* InLyingCapsule);
    
    UFUNCTION(BlueprintCallable)
    void AddAdditionalExtendingCapsule(USHCaterpillarCapsuleComponent* InLyingCapsule);
    
};

