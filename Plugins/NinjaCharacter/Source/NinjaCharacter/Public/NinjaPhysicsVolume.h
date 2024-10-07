#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PhysicsVolume.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaPhysicsVolume.generated.h"

class AActor;
class ANinjaCharacter;

UCLASS()
class NINJACHARACTER_API ANinjaPhysicsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<AActor*> TrackedActors;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<ANinjaCharacter*> TrackedNinjas;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    ENinjaGravityDirectionMode GravityDirectionMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector GravityVectorA;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector GravityVectorB;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    AActor* GravityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NinjaFallVelocity;
    
    ANinjaPhysicsVolume(const FObjectInitializer& ObjectInitializer);

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
    void SetGravityScale(float NewGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFixedGravityDirection(const FVector& NewGravityDirection);
    
    UFUNCTION(BlueprintPure)
    float GetGravityScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetGravityMagnitude(const FVector& Point) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGravityDirection(const FVector& Point) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGravity(const FVector& Point) const;
    
};

