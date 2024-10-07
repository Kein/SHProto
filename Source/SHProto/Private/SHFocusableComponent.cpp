#include "SHFocusableComponent.h"

USHFocusableComponent::USHFocusableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bUseDynamicFocusableType = false;
    this->FocusableType = ESHFocusableTypeEnum::None;
    this->bManualQuitInputHandling = false;
    this->MiniInventoryTypesFilter.AddDefaulted(1);
    this->FocusTranslucentMaterial = NULL;
    this->bPlayOnSolvedAudio = false;
    this->bHideCharacterPlayWhileInteraction = false;
    this->bUnequipCharacterPlayWeaponOnInteraction = true;
    this->bTeleportPlayerOnInteraction = false;
    this->bTeleportPlayerOnSolved = false;
    this->bTeleportMariaWhenTeleportngPlayer = false;
    this->bAllowCameraRotation = false;
    this->CameraRotationPitchLimit = 5.00f;
    this->CameraRotationYawLimit = 5.00f;
    this->CameraRotationDeltaInputMul = 0.12f;
    this->CameraRotationScaleInputMul = 20.00f;
    this->CameraRotationInterpSpeed = 10.00f;
    this->GenericNavigationLoopOption = ESHNavigationLoopOption::LoopBothAxis;
    this->GenericNavigationPerpendicularIgnoreZoneDot = 0.20f;
    this->GenericNavigationDistanceScoreMultiplier = 1.00f;
    this->GenericNavigationDotScoreMultiplier = 1.00f;
    this->bDisableOwnerTickWhenHidden = true;
    this->InteractingCharacter = NULL;
    this->FocusCamera = NULL;
    this->InteractionGeneric = NULL;
    this->TeleportMariaCapsuleComponent = NULL;
    this->FlashlightFocusSpotComponent = NULL;
    this->FlashlightSourceSpotComponent = NULL;
    this->FocusExtraLightsContainer = NULL;
    this->bIsCompleted = false;
}

void USHFocusableComponent::ShowTranscriptRequest(TSoftObjectPtr<USHTranscriptData> InTranscriptData) {
}

void USHFocusableComponent::ShowMiniInventoryRequest(bool bInstant) {
}

void USHFocusableComponent::ShowCombinedTranscriptsRequest(TArray<USHTranscriptData*> InTranscripts, const FString& InJoinDelimiter) {
}

void USHFocusableComponent::SetSolved() {
}

void USHFocusableComponent::SetInteractBlocked(const bool Blocked, const UObject* Object) {
}

void USHFocusableComponent::SetInputBlocked(const bool Blocked, const UObject* Object) {
}

void USHFocusableComponent::SetDefaultControlTips() {
}

void USHFocusableComponent::SetControlTips(const TArray<FDataTableRowHandle>& TipSet) {
}

void USHFocusableComponent::ResetCameraRotation() {
}

void USHFocusableComponent::RequestUpdateFlashlightFocus() {
}

void USHFocusableComponent::RequestPlayOnSolvedAudio() {
}

void USHFocusableComponent::RegisterTeleportPlayerCapsuleComponent(UCapsuleComponent* InCapsuleComponent) {
}

void USHFocusableComponent::RegisterTeleportMariaCapsuleComponent(UCapsuleComponent* InCapsuleComponent) {
}

void USHFocusableComponent::RegisterFlashlightSourceSpotComponent(USceneComponent* InSceneComponent) {
}

void USHFocusableComponent::RegisterFlashlightFocusSpotComponent(USceneComponent* InSceneComponent) {
}

void USHFocusableComponent::RegisterExtraLightsContainer(USceneComponent* InFocusExtraLightsContainer) {
}

void USHFocusableComponent::RegisterComponents(UCameraComponent* InCameraComponent, USHInteractionGenericComponent* InInteractionGenericComponent) {
}

void USHFocusableComponent::ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHFocusableComponent::ProcessCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHFocusableComponent::PlayWrongItemMiniInventoryAnim() {
}

void USHFocusableComponent::PlayItemSelectedAudio(bool IsCorrectItem) {
}

bool USHFocusableComponent::IsSolved() const {
    return false;
}

bool USHFocusableComponent::IsShown() const {
    return false;
}

bool USHFocusableComponent::IsMiniInventoryShown() const {
    return false;
}

bool USHFocusableComponent::IsInteractBlocked() const {
    return false;
}

bool USHFocusableComponent::IsInputBlocked() const {
    return false;
}

bool USHFocusableComponent::IsCameraRotationAllowed() const {
    return false;
}

void USHFocusableComponent::Interact(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

void USHFocusableComponent::HideRequest() {
}

void USHFocusableComponent::HideMiniInventoryRequest(bool bInstant) {
}

TArray<ESHItemTypeEnum> USHFocusableComponent::GetMiniInventoryTypesFilter() const {
    return TArray<ESHItemTypeEnum>();
}

ACharacter* USHFocusableComponent::GetInteractingCharacter() const {
    return NULL;
}

FVector2D USHFocusableComponent::GenericNavigation_NavigateInputAction(const float InputValue, FVector2D CurrentInput, const ESHFocusableInputActionTypeEnum InputAction) const {
    return FVector2D{};
}

int32 USHFocusableComponent::GenericNavigation_CalculateIndex_Impl(FVector2D InInput, const TArray<FVector> InWorldLocationsArray, int32 InCurrentSlotIndex) const {
    return 0;
}

int32 USHFocusableComponent::GenericNavigation_CalculateIndex(FVector2D InInput, const TArray<USceneComponent*>& InSlotArray, int32 InCurrentSlotIndex) const {
    return 0;
}

void USHFocusableComponent::ConsumeCurrentItem(bool SetPuzzleAsSolved) {
}


