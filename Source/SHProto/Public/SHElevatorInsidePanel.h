#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHElevatorInsidePanel.generated.h"

class ASHElevatorEngine;
class UBoxComponent;
class UCameraComponent;
class UCapsuleComponent;
class USHAkElevatorInsidePanelComponent;
class USHFocusableComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USphereComponent;

UCLASS()
class ASHElevatorInsidePanel : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* InteractionProximitySphere;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* CharacterPlayTeleportToSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* MariaTeleportToSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* InteractionIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHRaycastDetectableComponent* InteractionDetectable;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* InteractionDetectableShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkElevatorInsidePanelComponent* SHAkElevatorInsidePanel;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHFocusableComponent* FocusableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyOneTaskAtTimeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateCharacterToDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateCharacterToDoorsSnapDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditInstanceOnly)
    TSoftObjectPtr<ASHElevatorEngine> EngineSoftPtr;
    
    UPROPERTY(SaveGame)
    float AttachmentHeight;
    
public:
    ASHElevatorInsidePanel(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessOrdersQueueChange(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void ProcessOrderCompleted(ASHElevatorEngine* InElevatorEnginePtr);
    
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessFocusableShown();
    
};

