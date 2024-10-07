#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/Scene.h"
#include "EffectHandle.h"
#include "ESHFocusableInputActionTypeEnum.h"
#include "ESHFocusableTypeEnum.h"
#include "ESHItemTypeEnum.h"
#include "ESHNavigationLoopOption.h"
#include "SHFocusableComponent.generated.h"

class ACharacter;
class ASHCharacterPlay;
class UAkRtpc;
class UCameraComponent;
class UCapsuleComponent;
class UMaterialInterface;
class UObject;
class USHCharacterPlayCombatComponent;
class USHFocusableComponent;
class USHInteractionGenericComponent;
class USHTranscriptData;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFocusableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusableItemEvent, FName, ItemRowName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFocusableInputAction, ESHFocusableInputActionTypeEnum, InputActionType, float, KeyValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusableExEvent, USHFocusableComponent*, ComponentPtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFocusableEvent);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDynamicFocusableType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHFocusableTypeEnum FocusableType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bManualQuitInputHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHItemTypeEnum> MiniInventoryTypesFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> ControlTipsSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FocusTranslucentMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UAkRtpc*, FVector2D> HideShowRTPCsConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayOnSolvedAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideCharacterPlayWhileInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUnequipCharacterPlayWeaponOnInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTeleportPlayerOnInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTeleportPlayerOnSolved;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTeleportMariaWhenTeleportngPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowCameraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraRotationPitchLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraRotationYawLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraRotationDeltaInputMul;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraRotationScaleInputMul;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeightedBlendable> OnShowCameraBlendables;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHNavigationLoopOption GenericNavigationLoopOption;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GenericNavigationPerpendicularIgnoreZoneDot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GenericNavigationDistanceScoreMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GenericNavigationDotScoreMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle SolveLightEffect;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bDisableOwnerTickWhenHidden;
    
public:
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnSetupShow;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnShow;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnHide;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnBreak;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnSolved;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnMiniInventoryClosed;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableEvent OnTranscriptionClosed;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableItemEvent OnItemSelected;
    
    UPROPERTY(BlueprintAssignable)
    FFocusableInputAction OnInputAction;
    
protected:
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
    UPROPERTY(Instanced, Transient)
    UCameraComponent* FocusCamera;
    
    UPROPERTY(Instanced, Transient)
    USHInteractionGenericComponent* InteractionGeneric;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* TeleportMariaCapsuleComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* FlashlightFocusSpotComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* FlashlightSourceSpotComponent;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* FocusExtraLightsContainer;
    
    UPROPERTY(Instanced, Transient)
    TArray<UCapsuleComponent*> TeleportPlayerCapsuleComponents;
    
    UPROPERTY(SaveGame)
    bool bIsCompleted;
    
public:
    USHFocusableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowTranscriptRequest(TSoftObjectPtr<USHTranscriptData> InTranscriptData);
    
    UFUNCTION(BlueprintCallable)
    void ShowMiniInventoryRequest(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void ShowCombinedTranscriptsRequest(TArray<USHTranscriptData*> InTranscripts, const FString& InJoinDelimiter);
    
    UFUNCTION(BlueprintCallable)
    void SetSolved();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetInputBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultControlTips();
    
    UFUNCTION(BlueprintCallable)
    void SetControlTips(const TArray<FDataTableRowHandle>& TipSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateFlashlightFocus();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayOnSolvedAudio();
    
    UFUNCTION(BlueprintCallable)
    void RegisterTeleportPlayerCapsuleComponent(UCapsuleComponent* InCapsuleComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTeleportMariaCapsuleComponent(UCapsuleComponent* InCapsuleComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFlashlightSourceSpotComponent(USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFlashlightFocusSpotComponent(USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExtraLightsContainer(USceneComponent* InFocusExtraLightsContainer);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponents(UCameraComponent* InCameraComponent, USHInteractionGenericComponent* InInteractionGenericComponent);
    
protected:
    UFUNCTION()
    void ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp);
    
    UFUNCTION()
    void ProcessCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayWrongItemMiniInventoryAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayItemSelectedAudio(bool IsCorrectItem);
    
    UFUNCTION(BlueprintPure)
    bool IsSolved() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMiniInventoryShown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCameraRotationAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    void Interact(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character);
    
    UFUNCTION(BlueprintCallable)
    void HideRequest();
    
    UFUNCTION(BlueprintCallable)
    void HideMiniInventoryRequest(bool bInstant);
    
    UFUNCTION(BlueprintPure)
    TArray<ESHItemTypeEnum> GetMiniInventoryTypesFilter() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetInteractingCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GenericNavigation_NavigateInputAction(const float InputValue, FVector2D CurrentInput, const ESHFocusableInputActionTypeEnum InputAction) const;
    
    UFUNCTION(BlueprintPure)
    int32 GenericNavigation_CalculateIndex_Impl(FVector2D InInput, const TArray<FVector> InWorldLocationsArray, int32 InCurrentSlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GenericNavigation_CalculateIndex(FVector2D InInput, const TArray<USceneComponent*>& InSlotArray, int32 InCurrentSlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCurrentItem(bool SetPuzzleAsSolved);
    
};

