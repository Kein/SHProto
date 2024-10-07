#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "Engine/HitResult.h"
#include "SHCaterpillarCapsuleComponent.generated.h"

class USHCaterpillarCapsuleComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCaterpillarCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector CapsuleParentAttachmentScalars;
    
    UPROPERTY(EditDefaultsOnly)
    FVector CapsuleParentAttachmentOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator CapsuleParentAttachmentRotationInActorSpace;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleAnchorHeightScalar;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleStartsActivated;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleAvoidCollisions;
    
    UPROPERTY(EditDefaultsOnly)
    float TracingInitialLiftAngleHACK;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D InitialCollisionPullbackRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D InitialCollisionPullbackRotationOnPawns;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D TraceEndPoints;
    
    UPROPERTY(EditDefaultsOnly)
    float TraceDensity;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSnapBackToCollision;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleAlignToSurface;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleSurfaceAlignmentMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleSurfaceAlignmentIgnoreAnglesPast;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsulSurfaceAlignmentTraceAtHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector CapsuleSurfaceAlignmentTraceVector;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleSurfaceAlignmentTraceVectorPullback;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleAlignToSurfaceIgnorePawnChannel;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleAlignToSurfaceIgnorePawns;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapsuleSurfaceAlignmentTraceForStairs;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleSurfaceAlignmentTraceVectorExtensionForStairs;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleSurfaceAlignmentInterpolationHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInterpolateCapsuleRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableIdleRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRotationIdleInterpolationHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableMovementRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRotationMinimumInterpolationHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRotationMaximumInterpolationHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRotationAtMinimumVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRotationAtMaximumVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FVector CapsuleRotationVelocityMeasurementScale;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleExtensionScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleExtensionSafetyMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float CapsuleRadiusSafetyMargin;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawCollisionDebug;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawSurfaceAlignmentDebug;
    
    UPROPERTY(Instanced)
    TArray<USHCaterpillarCapsuleComponent*> ConnectedCapsules;
    
    UPROPERTY()
    float p_CachedConnectedCapsulesBaseLength;
    
    UPROPERTY()
    float p_BaseCapsuleHalfHeightWithoutHemisphere;
    
    UPROPERTY()
    FQuat p_CapsuleParentAttachmentRotationInActorSpaceQuat;
    
    UPROPERTY()
    FQuat p_CapsuleParentAttachmentRelativeRotationQuat;
    
    UPROPERTY()
    FQuat p_CapsuleTraceInitialLiftRotationQuat;
    
public:
    USHCaterpillarCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TraceCapsuleLocationAndRotationChange(const FVector& InTargetAnchorLocation, const FRotator& InTargetCapsuleRotation, float InPullbackRotationMultiplier, FVector& OutCapsuleLocation, FQuat& OutCapsuleRotation, FHitResult& OutHitResult);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleSurfaceAlignmentEnabled(bool InEnableAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleParentAttachmentScalars(const FVector& InAttachmentScalars);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleParentAttachmentOffset(const FVector& InAttachmentOffset);
    
    UFUNCTION(BlueprintCallable)
    bool SetCapsuleLocationAndRotationToDesired(bool InSweepCollisions);
    
    UFUNCTION(BlueprintCallable)
    bool SetCapsuleLocationAndRotation(const FVector& InAnchorLocation, const FRotator& InCapsuleRotation, bool InSweepCollisions, float InPullbackRotationMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleInterpolatingRotation(bool InInterpolate);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleIdleRotationEnabled(bool InEnableIdleRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleDesiredExtensionScalar(float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleAvoidCollisions(bool InAvoidCollisions);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleAnchorHeightScalar(float InAnchorScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleActivated(bool InActivated);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHalfHeightWithoutHemisphere(float InHalfHeightWithoutHemisphere);
    
    UFUNCTION(BlueprintCallable)
    void RetractCapsule();
    
    UFUNCTION(BlueprintCallable)
    bool ReExpandCapsuleAtDesiredLocationAndRotation();
    
    UFUNCTION(BlueprintPure)
    float GetDesiredCapsuleTopDistanceFromAnchor() const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredCapsuleBottomDistanceFromAnchor() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetCapsuleUnlyingWorldRotation() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetCapsuleTargetAnchorWorldRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCapsuleTargetAnchorWorldLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleTargetAnchorScalar() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCapsuleSurfaceAlignmentEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleRadiusSafetyMargin() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetCapsuleParentAttachmentDesiredRotationInActorSpace() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetCapsuleLyingRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCapsuleIsInterpolatingRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCapsuleIsAvoidingCollisions() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCapsuleIsActivated() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCapsuleIdleRotationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    void GetCapsuleExtensionScalarsFromAnchor(float& OutTopScalar, float& OutBottomScalar, bool InClamped) const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleExtensionSafetyMargin() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleDesiredHalfHeightWithoutHemisphere() const;
    
    UFUNCTION(BlueprintPure)
    float GetCapsuleCurrentExtensionScalar() const;
    
    UFUNCTION(BlueprintCallable)
    void ExpandCapsule();
    
};

