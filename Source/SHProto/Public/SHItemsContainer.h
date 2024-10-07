#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHLookAtActorInterface.h"
#include "SHItemsContainer.generated.h"

class ASHCharacterPlay;
class UBoxComponent;
class UObject;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS()
class ASHItemsContainer : public AActor, public ISHLookAtActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponent* ContainerMesh;
    
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
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOpenedOnBeginPlay;
    
    UPROPERTY(SaveGame)
    bool bIsOpen;
    
public:
    ASHItemsContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabledState(const bool bInDisabled, const UObject* InObject);
    
protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInDisabledState() const;
    
    UFUNCTION(BlueprintCallable)
    void Interact(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    

    // Fix for true pure virtual functions not being implemented
};

