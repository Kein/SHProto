#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHElevatorFloorConfig.h"
#include "SHElevatorOrderData.h"
#include "SHElevatorEngine.generated.h"

class APawn;
class ASHElevatorEngine;
class UBoxComponent;
class UObject;
class USHAkComponent;
class USHAkElevatorEngineComponent;
class USceneComponent;

UCLASS()
class ASHElevatorEngine : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHElevatorEngineFloatEvent, ASHElevatorEngine*, ElevatorEngine, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHElevatorEngineBaseEvent, ASHElevatorEngine*, ElevatorEngine);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* MovingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteriorAreaComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* SafeAreaComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkComponent* MainAkComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkElevatorEngineComponent* SHAkElevatorEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ElevatorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeginPlayFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FSHElevatorFloorConfig> FloorsConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepDoorStayOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetOrdersOnDoorBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DoorStayOpenedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DoorsOpenCloseTime;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineBaseEvent OnOrderCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineBaseEvent OnOrdersQueueChange;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineBaseEvent OnDoorNewRequest;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineBaseEvent OnDoorCollisionInterupt;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineBaseEvent OnMovementAlphaChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSHElevatorEngineFloatEvent OnDoorAlphaChanged;
    
    UPROPERTY(SaveGame)
    int32 CurrentFloor;
    
public:
    ASHElevatorEngine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryAbortActiveOrder();
    
    UFUNCTION(BlueprintPure)
    bool TraceForBlockedDoor(float InDoorOpenOffset, float InTraceSphereRadius, const FVector InPivotWorldOffset) const;
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveOrdersBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseDoorsBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDoorOpen(bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDoorCustom(float CustomOpenessAlpha, bool bInInstant);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDoorClose(bool bInInstant);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessDoorAlphaChanged(float ALPHA);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReceiveOrdersBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPawnInElevator(APawn* InCheckedPawn) const;
    
    UFUNCTION(BlueprintPure)
    bool IsKeepingDoorStayOpened() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInteriorReady();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDoorOpened() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoorClosed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloseDoorsBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActiveOrder() const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetOrdersQueue() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetFrontDoorsPivot() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentFloor() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentDisplayFloor() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetBackDoorsPivot() const;
    
    UFUNCTION(BlueprintPure)
    FSHElevatorOrderData GetActiveOrder() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearOrders();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool AreDoorsBlocked();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddOrder(const int32 FloorOrder);
    
};

