#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/HitResult.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaCharacterMovementComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJACHARACTER_API UNinjaCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceSimulateMovement: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRevertToDefaultGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLandOnAnySurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bTriggerUnwalkableHits: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    ENinjaGravityDirectionMode GravityDirectionMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector GravityVectorA;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector GravityVectorB;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    AActor* GravityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableGravityReplication: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlignGravityToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlignComponentToFloor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlignComponentToGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlwaysRotateAroundCenter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRotateVelocityOnGround: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThresholdParallelAngle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ThresholdOrthogonalCosine;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ThresholdParallelCosine;
    
public:
    UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignGravityToBase(bool bNewAlignGravityToBase);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetGravityScale(float NewGravityScale);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetFixedGravityDirection(const FVector& NewFixedGravityDirection);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEnableAlignGravityToBase();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEnableAlignComponentToGravity();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEnableAlignComponentToFloor();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDisableAlignGravityToBase();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDisableAlignComponentToGravity();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDisableAlignComponentToFloor();
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFixedGravityDirection(const FVector& NewGravityDirection);
    
    UFUNCTION(BlueprintPure)
    float GetGravityMagnitude() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGravityDirection(bool bAvoidZeroGravity) const;
    
};

