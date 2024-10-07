#include "SHSavePoint.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/RectLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SHCineCameraComponent.h"
#include "SHGameplayMapSavePointComponent.h"
#include "SHInteractionGenericComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHInteractionManagerComponent.h"
#include "SHRaycastDetectableComponent.h"

ASHSavePoint::ASHSavePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MeshOffsetPivot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshOffsetPivot"));
    this->MeshRotationPivot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRotationPivot"));
    this->SheetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SheetMesh"));
    this->Camera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("Camera"));
    this->AnimSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AnimSpot"));
    this->FlashlightLookAtPoint = CreateDefaultSubobject<USceneComponent>(TEXT("FlashlightLookAtPoint"));
    this->InteractionGeneric = CreateDefaultSubobject<USHInteractionGenericComponent>(TEXT("InteractionGeneric"));
    this->InteractionProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionProximitySphere"));
    this->InteractionIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("InteractionIcon"));
    this->InteractionDetectable = CreateDefaultSubobject<USHRaycastDetectableComponent>(TEXT("InteractionDetectable"));
    this->InteractionDetectableShape = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionDetectableShape"));
    this->GloomFXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GloomFXMesh"));
    this->InteractionSpotlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("InteractionSpotlight"));
    this->GameplaySpotlight_Enviro = CreateDefaultSubobject<USpotLightComponent>(TEXT("GameplaySpotlight_Enviro"));
    this->GameplaySpotlight_Player = CreateDefaultSubobject<USpotLightComponent>(TEXT("GameplaySpotlight_Player"));
    this->GameplayRectlight_Enviro = CreateDefaultSubobject<URectLightComponent>(TEXT("GameplayRectlight_Enviro"));
    this->InteractionManager = CreateDefaultSubobject<USHInteractionManagerComponent>(TEXT("InteractionManager"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapSavePointComponent>(TEXT("GameplayMapObject"));
    this->InteractingCharacter = NULL;
    this->AnimSpot->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(RootComponent);
    this->FlashlightLookAtPoint->SetupAttachment(SheetMesh);
    this->GameplayRectlight_Enviro->SetupAttachment(SheetMesh);
    this->GameplaySpotlight_Enviro->SetupAttachment(SheetMesh);
    this->GameplaySpotlight_Player->SetupAttachment(SheetMesh);
    this->GloomFXMesh->SetupAttachment(SheetMesh);
    this->InteractionDetectable->SetupAttachment(InteractionGeneric);
    this->InteractionDetectableShape->SetupAttachment(InteractionDetectable);
    this->InteractionGeneric->SetupAttachment(RootComponent);
    this->InteractionIcon->SetupAttachment(InteractionGeneric);
    this->InteractionProximitySphere->SetupAttachment(InteractionGeneric);
    this->InteractionSpotlight->SetupAttachment(RootComponent);
    this->MeshOffsetPivot->SetupAttachment(RootComponent);
    this->MeshRotationPivot->SetupAttachment(MeshOffsetPivot);
    this->SheetMesh->SetupAttachment(MeshRotationPivot);
}

void ASHSavePoint::ProcessReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

void ASHSavePoint::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASHSavePoint::ProcessMovementSnapFinish(bool WasCompleted) {
}

void ASHSavePoint::ProcessInteractionManagerInitialized(USHInteractionManagerComponent* Manager) {
}

void ASHSavePoint::ProcessCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp) {
}




void ASHSavePoint::ManualInteractRequest(ASHCharacterPlay* Character, bool SkipMoveToSpot) {
}

void ASHSavePoint::ExitInteractionRequest() {
}


