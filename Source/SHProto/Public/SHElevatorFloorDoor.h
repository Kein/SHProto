#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHElevatorFloorDoor.generated.h"

class ASHCharacterPlay;
class ASHElevatorEngine;
class UBoxComponent;
class USHAkElevatorFloorDoorComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USphereComponent;

UCLASS()
class ASHElevatorFloorDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphere;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkElevatorFloorDoorComponent* SHAkElevatorFloorDoor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 AssignedFloor;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TSoftObjectPtr<ASHElevatorEngine> EngineSoftPtr;
    
public:
    ASHElevatorFloorDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessDoorAlphaChanged(float ALPHA);
    
    UFUNCTION()
    void HandleOrdersQueueChange(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void HandleOrderCompleted(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void HandleInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
    UFUNCTION()
    void HandleEngineDestroy(AActor* DestroyedActor);
    
    UFUNCTION()
    void HandleDoorNewRequest(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void HandleDoorCollisionInterupted(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void HandleDoorAlphaChanged(ASHElevatorEngine* InElevatorEnginePtr, float Value);
    
};

