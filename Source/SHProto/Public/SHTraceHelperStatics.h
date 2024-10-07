#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "SHTraceHelperStatics.generated.h"

class AActor;
class UCapsuleComponent;
class UObject;

UCLASS(BlueprintType)
class USHTraceHelperStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHTraceHelperStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_TraceSphereAlongCapsuleByProfile(FHitResult& OutHitResult, float& OutSignedCollisionDistanceScalar, UObject* InWorldContext, const FVector& InLocation, const FQuat& InRotation, float InCapsuleRadius, float InCapsuleHalfHeight, float InCapsuleAnchorHeightScalar, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, FName InCollisionProfileName, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_TraceSphereAlongCapsuleByComponent(FHitResult& OutHitResult, float& OutSignedCollisionDistanceScalar, UCapsuleComponent* InCapsuleComponent, float InCapsuleRadiusIncrease, float InCapsuleHalfHeightIncrease, float InCapsuleAnchorHeightScalar, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, TEnumAsByte<ETraceTypeQuery> InTraceChannel, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_TraceSphereAlongCapsuleByChannel(FHitResult& OutHitResult, float& OutSignedCollisionDistanceScalar, UObject* InWorldContext, const FVector& InLocation, const FQuat& InRotation, float InCapsuleRadius, float InCapsuleHalfHeight, float InCapsuleAnchorHeightScalar, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, TEnumAsByte<ETraceTypeQuery> InTraceChannel, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_RotateCapsuleOutOfCollisionByProfile(FHitResult& OutHitResult, FVector& OutLocation, FRotator& OutRotation, UObject* InWorldContext, float InCapsuleRadius, float InCapsuleHalfHeight, float InRotationAnchorHeightScalar, const FVector& InLocation, const FRotator& InRotation, const FVector2D& InPullbackRotationMinimumAngles, const FVector2D& InPullbackRotationMaximumAngles, float InRotationPrecisionAngle, bool InSnapBackToCollision, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, FName InCollisionProfileName, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_RotateCapsuleOutOfCollisionByComponent(FHitResult& OutHitResult, FVector& OutLocation, FRotator& OutRotation, UCapsuleComponent* InCapsuleComponent, float InCapsuleRadiusIncrease, float InCapsuleHalfHeightIncrease, float InRotationAnchorHeightScalar, const FVector2D& InPullbackRotationMinimumAngles, const FVector2D& InPullbackRotationMaximumAngles, float InRotationPrecisionAngle, bool InSnapBackToCollision, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_RotateCapsuleOutOfCollisionByChannel(FHitResult& OutHitResult, FVector& OutLocation, FRotator& OutRotation, UObject* InWorldContext, float InCapsuleRadius, float InCapsuleHalfHeight, float InRotationAnchorHeightScalar, const FVector& InLocation, const FRotator& InRotation, const FVector2D& InPullbackRotationMinimumAngles, const FVector2D& InPullbackRotationMaximumAngles, float InRotationPrecisionAngle, bool InSnapBackToCollision, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, TEnumAsByte<ETraceTypeQuery> InTraceChannel, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_ComplexCapsuleTraceByProfile(FHitResult& OutHitResult, FRotator& OutHitRotation, float& OutHitCapsuleHalfHeight, float& OutHitCapsuleHeightScalar, UObject* InWorldContext, float InCapsuleRadius, float InCapsuleFromHalfHeight, float InCapsuleToHalfHeight, const FVector& InFromLocation, const FVector& InToLocation, const FRotator& InFromRotation, const FRotator& InDeltaRotation, float InRotationPrecisionAngle, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, float InCollisionPullbackTime, FName InCollisionProfileName, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_ComplexCapsuleTraceByComponent(FHitResult& OutHitResult, FRotator& OutHitRotation, float& OutHitCapsuleHalfHeight, float& OutHitCapsuleHeightScalar, UCapsuleComponent* InCapsuleComponent, float InCapsuleRadiusIncrease, float InCapsuleHalfHeightIncrease, float InCapsuleToHalfHeight, const FVector& InToLocation, const FRotator& InToDeltaRotation, float InRotationPrecisionAngle, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, float InCollisionPullbackTime, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool K2_ComplexCapsuleTraceByChannel(FHitResult& OutHitResult, FRotator& OutHitRotation, float& OutHitCapsuleHalfHeight, float& OutHitCapsuleHeightScalar, UObject* InWorldContext, float InCapsuleRadius, float InCapsuleFromHalfHeight, float InCapsuleToHalfHeight, const FVector& InFromLocation, const FVector& InToLocation, const FRotator& InFromRotation, const FRotator& InDeltaRotation, float InRotationPrecisionAngle, float InTraceDensity, float InTopTraceHeightScalar, float InBottomTraceHeightScalar, float InCollisionPullbackTime, TEnumAsByte<ETraceTypeQuery> InTraceChannel, bool InTraceComplex, const TArray<AActor*>& InActorsToIgnore, float InDrawDebugDuration);
    
};

