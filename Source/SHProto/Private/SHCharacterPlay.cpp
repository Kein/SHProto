#include "SHCharacterPlay.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SHAkCharacterAudioComponent.h"
#include "SHAkMusicComponent.h"
#include "SHCharacterPlayAdaptiveTriggersManager.h"
#include "SHCharacterPlayAnimComponent.h"
#include "SHCharacterPlayBrainComponent.h"
#include "SHCharacterPlayBreathNoiseComponent.h"
#include "SHCharacterPlayCameraComponent.h"
#include "SHCharacterPlayCameraOverlapHandleComponent.h"
#include "SHCharacterPlayCombatComponent.h"
#include "SHCharacterPlayDLCSkinStaticMeshComponent.h"
#include "SHCharacterPlayEndingsComponent.h"
#include "SHCharacterPlayFXComponent.h"
#include "SHCharacterPlayGenericInteractionSlotComponent.h"
#include "SHCharacterPlayHealthComponent.h"
#include "SHCharacterPlayImpactDetectionComponent.h"
#include "SHCharacterPlayItemsComponent.h"
#include "SHCharacterPlayLightsComponent.h"
#include "SHCharacterPlayLookAtLogicComponent.h"
#include "SHCharacterPlayMPCGameplayComponent.h"
#include "SHCharacterPlayMapComponent.h"
#include "SHCharacterPlayMovementComponent.h"
#include "SHCharacterPlayRaycastDetectorComponent.h"
#include "SHCharacterPlaySpringArmComponent.h"
#include "SHCharacterPlayStairsDetectionComponent.h"
#include "SHCharacterPlayStatisticsComponent.h"
#include "SHCharacterPlayTraversalComponent.h"
#include "SHCharacterPlayTutorialsComponent.h"
#include "SHCharacterPlayUIComponent.h"
#include "SHCharacterPlayViewComponent.h"

ASHCharacterPlay::ASHCharacterPlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHCharacterPlayMovementComponent>(TEXT("CharMoveComp"))) {
    this->DLCSkinStaticMesh = CreateDefaultSubobject<USHCharacterPlayDLCSkinStaticMeshComponent>(TEXT("DLCSkinStaticMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->View = CreateDefaultSubobject<USHCharacterPlayViewComponent>(TEXT("View"));
    this->SpringArm = CreateDefaultSubobject<USHCharacterPlaySpringArmComponent>(TEXT("SpringArm"));
    this->Camera = CreateDefaultSubobject<USHCharacterPlayCameraComponent>(TEXT("Camera"));
    this->BreathNoise = CreateDefaultSubobject<USHCharacterPlayBreathNoiseComponent>(TEXT("BreathNoise"));
    this->AudioComponent = CreateDefaultSubobject<USHAkCharacterAudioComponent>(TEXT("USHAkCharacterAudioComponent"));
    this->MusicComponent = CreateDefaultSubobject<USHAkMusicComponent>(TEXT("USHAkMusicComponent"));
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->Movement = (USHCharacterPlayMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<USHCharacterPlayMovementComponent*>(this);
    this->Input = NULL;
    this->RaycastDetector = CreateDefaultSubobject<USHCharacterPlayRaycastDetectorComponent>(TEXT("RaycastDetector"));
    this->GenericSlot = CreateDefaultSubobject<USHCharacterPlayGenericInteractionSlotComponent>(TEXT("GenericSlot"));
    this->Brain = CreateDefaultSubobject<USHCharacterPlayBrainComponent>(TEXT("Brain"));
    this->Lights = CreateDefaultSubobject<USHCharacterPlayLightsComponent>(TEXT("Lights"));
    this->Health = CreateDefaultSubobject<USHCharacterPlayHealthComponent>(TEXT("Health"));
    this->Items = CreateDefaultSubobject<USHCharacterPlayItemsComponent>(TEXT("Items"));
    this->Combat = CreateDefaultSubobject<USHCharacterPlayCombatComponent>(TEXT("Combat"));
    this->MapData = CreateDefaultSubobject<USHCharacterPlayMapComponent>(TEXT("MapData"));
    this->Animation = CreateDefaultSubobject<USHCharacterPlayAnimComponent>(TEXT("Animation"));
    this->PhysicalAnimation = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("PhysicalAnimation"));
    this->LookAtLogic = CreateDefaultSubobject<USHCharacterPlayLookAtLogicComponent>(TEXT("LookAtLogic"));
    this->UIComponent = CreateDefaultSubobject<USHCharacterPlayUIComponent>(TEXT("UIComponent"));
    this->ImpactDetection = CreateDefaultSubobject<USHCharacterPlayImpactDetectionComponent>(TEXT("ImpactDetection"));
    this->GameplayMPC = CreateDefaultSubobject<USHCharacterPlayMPCGameplayComponent>(TEXT("GameplayMPC"));
    this->Traversal = CreateDefaultSubobject<USHCharacterPlayTraversalComponent>(TEXT("Traversal"));
    this->TutorialsComponent = CreateDefaultSubobject<USHCharacterPlayTutorialsComponent>(TEXT("TutorialsComponent"));
    this->AdaptiveTriggersManager = CreateDefaultSubobject<USHCharacterPlayAdaptiveTriggersManager>(TEXT("AddaptiveTriggers"));
    this->CameraOverlapHandler = CreateDefaultSubobject<USHCharacterPlayCameraOverlapHandleComponent>(TEXT("CameraOverlapHandler"));
    this->EndingsComponent = CreateDefaultSubobject<USHCharacterPlayEndingsComponent>(TEXT("EndingsComponent"));
    this->FXComponent = CreateDefaultSubobject<USHCharacterPlayFXComponent>(TEXT("FXComponent"));
    this->StairsDetectionComponent = CreateDefaultSubobject<USHCharacterPlayStairsDetectionComponent>(TEXT("StairsDetectionComponent"));
    this->StatisticsComponent = CreateDefaultSubobject<USHCharacterPlayStatisticsComponent>(TEXT("StatisticsComponent"));
    this->AudioComponent->SetupAttachment(RootComponent);
    this->BreathNoise->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(SpringArm);
    this->DLCSkinStaticMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->MusicComponent->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(View);
    this->View->SetupAttachment(RootComponent);
}

void ASHCharacterPlay::SHDebug_Temporal_SetHasEverFinishedGame(bool bInValue) {
}

void ASHCharacterPlay::SHDebug_Custom(const FString& DebugCommand, int32 Value) {
}

void ASHCharacterPlay::SHDebug_Character_ToggleVisibility() {
}

void ASHCharacterPlay::SHDebug_Character_GameplayInputMode_ValuesDebug() {
}

void ASHCharacterPlay::SHDebug_Character_Difficulties_SetPuzzlesDifficulty(int32 InValue) {
}

void ASHCharacterPlay::SHDebug_Character_Difficulties_SetCombatDifficulty(int32 InValue) {
}

void ASHCharacterPlay::SetGameplayInputMode(const ESHGameplayInputModeEnum NewGameplayInputMode) {
}

void ASHCharacterPlay::SetCharacterPlayVisibility(const bool Hide, const bool SkipFlashlight) {
}

bool ASHCharacterPlay::HasInputComponent() const {
    return false;
}

ESHGameplayInputModeEnum ASHCharacterPlay::GetGameplayInputMode() {
    return ESHGameplayInputModeEnum::Default;
}

TArray<AActor*> ASHCharacterPlay::GetAllAttachedActors() const {
    return TArray<AActor*>();
}


