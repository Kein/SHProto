#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHGameplayInputModeEnum.h"
#include "SHCharacter.h"
#include "SHInteractionStarter.h"
#include "SHCharacterPlay.generated.h"

class AActor;
class ISHInteraction;
class USHInteraction;
class ISHInteractionSlot;
class USHInteractionSlot;
class UPhysicalAnimationComponent;
class USHAkCharacterAudioComponent;
class USHAkMusicComponent;
class USHCharacterPlayAdaptiveTriggersManager;
class USHCharacterPlayAnimComponent;
class USHCharacterPlayBrainComponent;
class USHCharacterPlayBreathNoiseComponent;
class USHCharacterPlayCameraComponent;
class USHCharacterPlayCameraOverlapHandleComponent;
class USHCharacterPlayCombatComponent;
class USHCharacterPlayDLCSkinStaticMeshComponent;
class USHCharacterPlayEndingsComponent;
class USHCharacterPlayFXComponent;
class USHCharacterPlayGenericInteractionSlotComponent;
class USHCharacterPlayHealthComponent;
class USHCharacterPlayImpactDetectionComponent;
class USHCharacterPlayInputComponent;
class USHCharacterPlayItemsComponent;
class USHCharacterPlayLightsComponent;
class USHCharacterPlayLookAtLogicComponent;
class USHCharacterPlayMPCGameplayComponent;
class USHCharacterPlayMapComponent;
class USHCharacterPlayMovementComponent;
class USHCharacterPlayRaycastDetectorComponent;
class USHCharacterPlaySpringArmComponent;
class USHCharacterPlayStairsDetectionComponent;
class USHCharacterPlayStatisticsComponent;
class USHCharacterPlayTraversalComponent;
class USHCharacterPlayTutorialsComponent;
class USHCharacterPlayUIComponent;
class USHCharacterPlayViewComponent;

UCLASS(NotPlaceable)
class ASHCharacterPlay : public ASHCharacter, public ISHInteractionStarter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayDLCSkinStaticMeshComponent* DLCSkinStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayViewComponent* View;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlaySpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayBreathNoiseComponent* BreathNoise;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkCharacterAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHAkMusicComponent* MusicComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayInputComponent* Input;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayRaycastDetectorComponent* RaycastDetector;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayGenericInteractionSlotComponent* GenericSlot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayBrainComponent* Brain;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayLightsComponent* Lights;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayItemsComponent* Items;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayCombatComponent* Combat;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayMapComponent* MapData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayAnimComponent* Animation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicalAnimationComponent* PhysicalAnimation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayLookAtLogicComponent* LookAtLogic;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayUIComponent* UIComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayImpactDetectionComponent* ImpactDetection;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayMPCGameplayComponent* GameplayMPC;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayTraversalComponent* Traversal;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayTutorialsComponent* TutorialsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayAdaptiveTriggersManager* AdaptiveTriggersManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayCameraOverlapHandleComponent* CameraOverlapHandler;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayEndingsComponent* EndingsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayFXComponent* FXComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayStairsDetectionComponent* StairsDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USHCharacterPlayStatisticsComponent* StatisticsComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DefaultMeshRelPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator DefaultMeshRelRotation;
    
    UPROPERTY()
    TArray<TScriptInterface<ISHInteractionSlot>> InteractionSlots;
    
public:
    ASHCharacterPlay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Temporal_SetHasEverFinishedGame(bool bInValue);
    
    UFUNCTION(Exec)
    void SHDebug_Custom(const FString& DebugCommand, int32 Value);
    
    UFUNCTION(Exec)
    void SHDebug_Character_ToggleVisibility();
    
    UFUNCTION(Exec)
    void SHDebug_Character_GameplayInputMode_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Difficulties_SetPuzzlesDifficulty(int32 InValue);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Difficulties_SetCombatDifficulty(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayInputMode(const ESHGameplayInputModeEnum NewGameplayInputMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterPlayVisibility(const bool Hide, const bool SkipFlashlight);
    
    UFUNCTION(BlueprintPure)
    bool HasInputComponent() const;
    
    UFUNCTION(BlueprintPure)
    ESHGameplayInputModeEnum GetGameplayInputMode();
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetAllAttachedActors() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TScriptInterface<ISHInteractionSlot> TryStartInteraction(const TScriptInterface<ISHInteraction>& Interaction) override PURE_VIRTUAL(TryStartInteraction, return NULL;);
    
};

