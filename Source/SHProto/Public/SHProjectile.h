#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS(Abstract)
class ASHProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UProjectileMovementComponent* ProjectileMovement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAutoDestroyOnMovementStopeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LifetimeAfterRangeReached;
    
public:
    ASHProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WantDrawDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaxRangeReached() const;
    
};

