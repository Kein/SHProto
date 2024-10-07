#include "SHFleshLipCeilingActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

ASHFleshLipCeilingActor::ASHFleshLipCeilingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->TilesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Tiles Root"));
    this->TileParticlesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Tile Particles Root"));
    this->CeilingBarsHorizontalISMC = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Ceiling Bars Horizontal"));
    this->CeilingBarsVerticalISMC = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Ceiling Bars Vertical"));
    this->CeilingTilesISMC = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Ceiling Tiles"));
    this->CeilingTilesX = 4;
    this->CeilingTilesY = 4;
    this->CeilingTilesWidth = 64.00f;
    this->CeilingTilesHeight = 64.00f;
    this->CeilingTileActorClass = NULL;
    this->HangingTileDropVelocity = 500.00f;
    this->GridBarSeparationX = 4;
    this->GridBarSeparationY = 4;
    this->bForceActorTickingEnabled = false;
    this->CeilingBarsHorizontalISMC->SetupAttachment(TilesRoot);
    this->CeilingBarsVerticalISMC->SetupAttachment(TilesRoot);
    this->CeilingTilesISMC->SetupAttachment(TilesRoot);
    this->TileParticlesRoot->SetupAttachment(TilesRoot);
    this->TilesRoot->SetupAttachment(RootComponent);
}

void ASHFleshLipCeilingActor::SpawnParticlesAtTiles(UNiagaraSystem* InParticles, const FTransform& InParticlesOffset, const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, bool InIfTileExistsAtLocation, float InParticlesSpawnAlphaThreshold, FName InParticleDistanceAlphaParameterName) {
}

bool ASHFleshLipCeilingActor::SetTileWorldTransform(const FVector2D& InTileCoordinates, const FTransform& InWorldTransform, bool InAllowForDisconnectedTile) {
    return false;
}

bool ASHFleshLipCeilingActor::SetTileTransformRelativeToCell(const FVector2D& InTileCoordinates, const FTransform& InTransformInCell, bool InAllowForDisconnectedTile) {
    return false;
}

void ASHFleshLipCeilingActor::SetIgnoreCollisionWithActor(AActor* InActor, bool InIgnoreCollision) {
}

void ASHFleshLipCeilingActor::OnTileParticlesSystemFinished(UNiagaraComponent* InParticlesComponent) {
}

void ASHFleshLipCeilingActor::InitializeCeiling() {
}

bool ASHFleshLipCeilingActor::GetTileWorldTransform(const FVector2D& InTileCoordinates, FTransform& OutWorldTransform) const {
    return false;
}

bool ASHFleshLipCeilingActor::GetTileTransformRelativeToCell(const FVector2D& InTileCoordinates, FTransform& OutRelativeTransform) const {
    return false;
}

FTransform ASHFleshLipCeilingActor::GetTileGridCellWorldTransform(const FVector2D& InTileCoordinates) const {
    return FTransform{};
}

FVector ASHFleshLipCeilingActor::GetTileGridCellWorldLocation(const FVector2D& InTileCoordinates) const {
    return FVector{};
}

FTransform ASHFleshLipCeilingActor::GetTileGridCellTransform(const FVector2D& InTileCoordinates) const {
    return FTransform{};
}

FVector ASHFleshLipCeilingActor::GetTileGridCellLocation(const FVector2D& InTileCoordinates) const {
    return FVector{};
}

void ASHFleshLipCeilingActor::GetTileCoordinatesFromWorldLocation(FVector2D& OutTileCoordinates, const FVector& InWorldLocation) const {
}

void ASHFleshLipCeilingActor::GetTileCoordinatesFromGridLocation(FVector2D& OutTileCoordinates, const FVector& InGridLocation) const {
}

void ASHFleshLipCeilingActor::GetNearestFreeWorldLocationBetweenBars(FVector& OutWorldLocation, const FVector& InNearLocation, float InBarsDistance) const {
}

void ASHFleshLipCeilingActor::GetNearestBarsGrabWorldTransform(FTransform& OutWorldTransform, const FVector& InNearLocation, float InJunctionDistance, bool InExcludeEdges) const {
}

void ASHFleshLipCeilingActor::GetCeilingTileActorsBetweenWorldLocations(TArray<ASHFleshLipCeilingTileActor*>& OutTileActors, const FVector& InFromWorldLocation, const FVector& InToWorldLocation, bool InConvertFromInstances) {
}

void ASHFleshLipCeilingActor::GetCeilingTileActorsBetweenCoordinates(TArray<ASHFleshLipCeilingTileActor*>& OutTileActors, int32 InFromTileX, int32 InFromTileY, int32 InToTileX, int32 InToTileY, bool InConvertFromInstances) {
}

ASHFleshLipCeilingTileActor* ASHFleshLipCeilingActor::GetCeilingTileActorAtWorldLocation(const FVector& InWorldLocation, bool InConvertFromInstance) {
    return NULL;
}

ASHFleshLipCeilingTileActor* ASHFleshLipCeilingActor::GetCeilingTileActorAtCoordinates(int32 InTileX, int32 InTileY, bool InConvertFromInstance) {
    return NULL;
}

void ASHFleshLipCeilingActor::GetCeilingSize(FVector2D& OutSize) const {
}

void ASHFleshLipCeilingActor::GetBarsFrameTileCoordinatesAroundTile(float& OutFrameMinX, float& OutFrameMinY, float& OutFrameMaxX, float& OutFrameMaxY, const FVector2D& InTileCoordinates, bool InInnerMax) const {
}

void ASHFleshLipCeilingActor::DropCeilingTile(int32 InTileX, int32 InTileY, float InDropDelay, bool InOverrideExistingDelay, const FVector& InDropVelocity, const FVector& InDropRotation) {
}

bool ASHFleshLipCeilingActor::DoesCeilingTileAtWorldLocationExist(const FVector& InWorldLocation, bool InAllowDisconnected) const {
    return false;
}

bool ASHFleshLipCeilingActor::DoesCeilingTileAtCoordinatesExist(int32 InTileX, int32 InTileY, bool InAllowDisconnected) const {
    return false;
}

void ASHFleshLipCeilingActor::DestroyCeilingTilesAtWorldLocation(const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, bool InDropHangingNeighbours) {
}

void ASHFleshLipCeilingActor::DestroyCeilingTile(int32 InTileX, int32 InTileY, bool InDropHangingNeighbours) {
}

void ASHFleshLipCeilingActor::DamageCeilingTile(int32 InTileX, int32 InTileY, const FVector& InHitLocation, const FVector& InHitVelocity, float InMaximumDropRotation) {
}

void ASHFleshLipCeilingActor::BreakCeilingTilesAtWorldLocation(const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, float InVerticalVelocity, float InHorizontalVelocity, float InMaximumRotation, const FSimpleBentCurve& InForceDistribution) {
}

bool ASHFleshLipCeilingActor::AreTileCoordinatesValid(int32 InTileX, int32 InTileY) const {
    return false;
}

void ASHFleshLipCeilingActor::ApplyTilesPressure(const FVector& InWorldLocation, float InPushDepth, float InRadius, bool InLimitedByBars, bool InIfTileExistsAtLocation, float InParticlesSpawnAlphaThreshold) {
}


