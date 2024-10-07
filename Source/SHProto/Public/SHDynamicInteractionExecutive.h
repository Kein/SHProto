#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHDynamicInteractionExecutive.generated.h"

class UBoxComponent;
class USHDynamicInteractionManagerComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USphereComponent;

UCLASS()
class ASHDynamicInteractionExecutive : public AActor {
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
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bWantAutoAttachToOwnerContext;
    
    UPROPERTY(Instanced, Transient)
    USHDynamicInteractionManagerComponent* OwnerManager;
    
public:
    ASHDynamicInteractionExecutive(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
public:
    UFUNCTION(BlueprintCallable)
    USHDynamicInteractionManagerComponent* GetOwnerManager();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOwnerContext();
    
};

