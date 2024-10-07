#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHDoorLockBaseComponent.generated.h"

class ASHCharacterPlay;
class USHDoorLockBaseComponent;
class USHInteractionGenericComponent;
class USHInteractionManagerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDoorLockBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorLockEventBP, USHDoorLockBaseComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDoorLockEvent, USHDoorLockBaseComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bLockedOnBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSHDoorLockEventBP OnLockStateChange;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionGenericComponent* ManagedInteractionGeneric;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionManagerComponent* ManagedInteractionManager;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* InteractedCharacter;
    
    UPROPERTY(SaveGame)
    bool bIsDoorLocked;
    
public:
    USHDoorLockBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLocked(bool NewLocked, bool SkipDetectableManagement);
    
protected:
    UFUNCTION()
    void OnInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLockedOnBegin() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
};

