#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/HitResult.h"
#include "SHSavePoint.generated.h"

class ASHCharacterPlay;
class ASHSavePoint;
class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class URectLightComponent;
class USHCharacterPlayCombatComponent;
class USHCineCameraComponent;
class USHGameplayMapSavePointComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class USceneComponent;
class USphereComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHSavePoint : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSavePointActorEvent, ASHSavePoint*, Actor);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* MeshOffsetPivot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* MeshRotationPivot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* SheetMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHCineCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* AnimSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* FlashlightLookAtPoint;
    
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
    UStaticMeshComponent* GloomFXMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* InteractionSpotlight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* GameplaySpotlight_Enviro;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USpotLightComponent* GameplaySpotlight_Player;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    URectLightComponent* GameplayRectlight_Enviro;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionManagerComponent* InteractionManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapSavePointComponent* GameplayMapObject;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDataTableRowHandle SavePointHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> AnimationMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> FaceAnimMontage;
    
    UPROPERTY(BlueprintAssignable)
    FSHSavePointActorEvent InteractionStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHSavePointActorEvent InteractionFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHSavePointActorEvent InteractionAbortedEvent;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* InteractingCharacter;
    
public:
    ASHSavePoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void ProcessMovementSnapFinish(bool WasCompleted);
    
    UFUNCTION()
    void ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager);
    
    UFUNCTION()
    void ProcessCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetupStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionEnded(bool WasAborted);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManualInteractRequest(ASHCharacterPlay* Character, bool SkipMoveToSpot);
    
    UFUNCTION(BlueprintCallable)
    void ExitInteractionRequest();
    
};

