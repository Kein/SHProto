#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterBinding.h"
#include "CutsceneBoostMaterialConfig.h"
#include "CutsceneSkipSettings.h"
#include "DialogSpeakerBinding.h"
#include "CutscenePlayer.generated.h"

class ACharacter;
class ACutscenePlayer;
class ACutsceneTexturesStreamingBoostLocation;
class ALevelSequenceActor;
class UAkAudioEvent;
class UAkComponent;
class UCameraComponent;
class ULevelStreamingManager;
class USceneComponent;

UCLASS()
class CUTSCENES_API ACutscenePlayer : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCutsceneCameraCutEvent, UCameraComponent*, CameraComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCutsceneFinishedEvent, bool, WasSkiped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCutsceneEvent);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(Instanced, Transient)
    UAkComponent* SoundTrackComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* MusicTrack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopMusicTrackWithCutscene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SkipAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPlayOnlyOnce: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bStopAllActiveDialogsAtStart: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bTeleportPlayerAfterCutscene: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCutsceneSkipSettings SkipSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCustomCharacterBlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomCharacterBlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCustomCharacterBlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomCharacterBlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableCharacterCollisions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableCharacterFootIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverrideLightingChannelsUsingProxyMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForceLOD0OnCharacters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ACutscenePlayer> PlayAsNextCutcene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PropagateSkipToNextCutscene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<ACutsceneTexturesStreamingBoostLocation>> TexturesStreamingBoostLocations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCutsceneBoostMaterialConfig> MaterialsStreamingBoostInstances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool WaitForAllAssetsToStreamInAtCutsceneStart;
    
public:
    UPROPERTY(BlueprintAssignable)
    FCutsceneEvent OnCutscenePreStart;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneEvent OnCutscenePlay;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneEvent OnCutscenePlayReverse;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneEvent OnCutsceneStop;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneEvent OnCutscenePause;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneFinishedEvent OnCutscenePreFinished;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneFinishedEvent OnCutsceneFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnCutsceneCameraCutEvent OnCameraCut;
    
protected:
    UPROPERTY(SaveGame)
    uint8 bPlayedOnce: 1;
    
    UPROPERTY()
    bool StreamingSkipConditionsMet;
    
    UPROPERTY()
    bool WaitForStreamingRequestsCompletion;
    
    UPROPERTY()
    TArray<FCharacterBinding> CharacterBindings;
    
    UPROPERTY()
    TArray<FDialogSpeakerBinding> DialogSpeakersBindings;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> StandaloneDialogSpeakers;
    
    UPROPERTY(Transient)
    TArray<AActor*> ActorsSynchronizedWithPlayer;
    
    UPROPERTY(Transient)
    ULevelStreamingManager* LevelStreamingManager;
    
public:
    ACutscenePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnbindCharacterWithProxy(ACharacter* Character);
    
protected:
    UFUNCTION()
    void OnLevelSequenceStop();
    
    UFUNCTION()
    void OnLevelSequencePlayReverse();
    
    UFUNCTION()
    void OnLevelSequencePlay();
    
    UFUNCTION()
    void OnLevelSequencePause();
    
    UFUNCTION()
    void OnLevelSequenceFinished();
    
    UFUNCTION()
    void OnLevelSequenceCameraCut(UCameraComponent* CameraComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterBindedWithProxy(ACharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsAlreadyPlayedOnce() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    bool Activate();
    
};

