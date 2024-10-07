#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "ESHDoorStateEnum.h"
#include "SHDoorMovementBaseComponent.generated.h"

class AActor;
class ASHCharacterPlay;
class UObject;
class UPlaneSideDetectionComponent;
class UPrimitiveComponent;
class USHDoorLockBaseComponent;
class USHDoorMovementBaseComponent;
class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDoorMovementBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorBaseMovementEventBP, USHDoorMovementBaseComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorBaseMovementEvent, USHDoorMovementBaseComponent*, Component);
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector DoorTraceAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector DoorTraceLocalOffset;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* ManagedDoorMesh;
    
    UPROPERTY(Instanced, Transient)
    UPlaneSideDetectionComponent* ManagedPlaneSideDetection;
    
    UPROPERTY(Instanced, Transient)
    USHDoorLockBaseComponent* ManagedDoorLockComponent;
    
    UPROPERTY(Instanced, Transient)
    USphereComponent* ManagedProximityDetectionSphere;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* ManagedAboveHandleSpot;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* ManagedBelowHandleSpot;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* ActiveProximitySHActor;
    
public:
    USHDoorMovementBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsManagedByCutscene(bool InEnable, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessProximitySHActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximitySHActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsManagedByCutscene() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastDoorVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDoorTraceHalfSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentDoorVelocity() const;
    
    UFUNCTION(BlueprintPure)
    ESHDoorStateEnum GetCurrentDoorState() const;
    
};

