#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHMeatConveyorBase.generated.h"

class ACharacter;
class ASHHookedMeatBase;
class ASHMeatConveyorBase;
class UCurveFloat;
class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHMeatConveyorBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHMeatConveyorBaseEvent, ASHMeatConveyorBase*, Conveyor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHMeatConveyorBaseBoolContextEvent, ASHMeatConveyorBase*, Conveyor, bool, Value);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* RailStaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<ASHHookedMeatBase*> ManagedMeats;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ConveyorMovementCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeBetweenMovements;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxPushableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorkingAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorkingAreaHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinPushableChunkAmount;
    
    UPROPERTY(BlueprintAssignable)
    FSHMeatConveyorBaseEvent MovementRoutineStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHMeatConveyorBaseBoolContextEvent MovementRoutineFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHMeatConveyorBaseEvent MotionChangedEvent;
    
public:
    ASHMeatConveyorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindFromBossDispatch(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMovementRoutine();
    
    UFUNCTION(BlueprintPure)
    bool IsMovementRoutineRequested() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInMotion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterInWorkArea(ACharacter* InCharacter, bool AllowCapsuleTouch) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMovementRoutine(const bool bInstant);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindToBossDispatch(AActor* Target);
    
};

