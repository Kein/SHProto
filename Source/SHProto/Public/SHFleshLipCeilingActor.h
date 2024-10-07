#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SimpleBentCurve.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHFleshLipCeilingActorHangingTileDropChancesPerType.h"
#include "SHFleshLipCeilingCustomTileConfiguration.h"
#include "SHFleshLipCeilingTile.h"
#include "SHFleshLipCeilingTileShakePhysicsConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SHFleshLipCeilingActor.generated.h"

class ASHFleshLipCeilingTileActor;
class UInstancedStaticMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USceneComponent;

UCLASS()
class SHPROTO_API ASHFleshLipCeilingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* TilesRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* TileParticlesRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInstancedStaticMeshComponent* CeilingBarsHorizontalISMC;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInstancedStaticMeshComponent* CeilingBarsVerticalISMC;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInstancedStaticMeshComponent* CeilingTilesISMC;
    
    UPROPERTY(EditAnywhere)
    int32 CeilingTilesX;
    
    UPROPERTY(EditAnywhere)
    int32 CeilingTilesY;
    
    UPROPERTY(EditAnywhere)
    float CeilingTilesWidth;
    
    UPROPERTY(EditAnywhere)
    float CeilingTilesHeight;
    
    UPROPERTY(EditAnywhere)
    FTransform CeilingTilesTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform CeilingTilesHiddenTransform;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASHFleshLipCeilingTileActor> CeilingTileActorClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FSHFleshLipCeilingCustomTileConfiguration> CustomTiles;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingActorHangingTileDropChancesPerType DamagedTileDropChances;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingActorHangingTileDropChancesPerType HangingTileDropChances;
    
    UPROPERTY(EditAnywhere)
    FMinMaxVector2D HangingTileDropDelay;
    
    UPROPERTY(EditAnywhere)
    float HangingTileDropVelocity;
    
    UPROPERTY(EditAnywhere)
    FMinMaxVector2D HangingTileDropRotation;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingTileShakePhysicsConfiguration TileShakePhysicsConfiguration;
    
    UPROPERTY(EditAnywhere)
    int32 GridBarSeparationX;
    
    UPROPERTY(EditAnywhere)
    int32 GridBarSeparationY;
    
    UPROPERTY(EditAnywhere)
    FTransform CeilingHorizontalBarsTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform CeilingVerticalBarsTransform;
    
    UPROPERTY(EditAnywhere)
    bool bForceActorTickingEnabled;
    
    UPROPERTY()
    TArray<FSHFleshLipCeilingTile> CeilingTiles;
    
    UPROPERTY()
    TArray<ASHFleshLipCeilingTileActor*> CeilingTileActors;
    
    UPROPERTY()
    TArray<AActor*> IgnoreCollisionWithActors;
    
public:
    ASHFleshLipCeilingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnParticlesAtTiles(UNiagaraSystem* InParticles, const FTransform& InParticlesOffset, const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, bool InIfTileExistsAtLocation, float InParticlesSpawnAlphaThreshold, FName InParticleDistanceAlphaParameterName);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetTileWorldTransform(const FVector2D& InTileCoordinates, const FTransform& InWorldTransform, bool InAllowForDisconnectedTile);
    
    UFUNCTION(BlueprintCallable)
    bool SetTileTransformRelativeToCell(const FVector2D& InTileCoordinates, const FTransform& InTransformInCell, bool InAllowForDisconnectedTile);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIgnoreCollisionWithActor(AActor* InActor, bool InIgnoreCollision);
    
protected:
    UFUNCTION()
    void OnTileParticlesSystemFinished(UNiagaraComponent* InParticlesComponent);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCeiling();
    
    UFUNCTION(BlueprintPure)
    bool GetTileWorldTransform(const FVector2D& InTileCoordinates, FTransform& OutWorldTransform) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTileTransformRelativeToCell(const FVector2D& InTileCoordinates, FTransform& OutRelativeTransform) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTileGridCellWorldTransform(const FVector2D& InTileCoordinates) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTileGridCellWorldLocation(const FVector2D& InTileCoordinates) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTileGridCellTransform(const FVector2D& InTileCoordinates) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTileGridCellLocation(const FVector2D& InTileCoordinates) const;
    
    UFUNCTION(BlueprintPure)
    void GetTileCoordinatesFromWorldLocation(FVector2D& OutTileCoordinates, const FVector& InWorldLocation) const;
    
    UFUNCTION(BlueprintPure)
    void GetTileCoordinatesFromGridLocation(FVector2D& OutTileCoordinates, const FVector& InGridLocation) const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetNearestFreeWorldLocationBetweenBars(FVector& OutWorldLocation, const FVector& InNearLocation, float InBarsDistance) const;
    
    UFUNCTION(BlueprintPure)
    void GetNearestBarsGrabWorldTransform(FTransform& OutWorldTransform, const FVector& InNearLocation, float InJunctionDistance, bool InExcludeEdges) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCeilingTileActorsBetweenWorldLocations(TArray<ASHFleshLipCeilingTileActor*>& OutTileActors, const FVector& InFromWorldLocation, const FVector& InToWorldLocation, bool InConvertFromInstances);
    
    UFUNCTION(BlueprintCallable)
    void GetCeilingTileActorsBetweenCoordinates(TArray<ASHFleshLipCeilingTileActor*>& OutTileActors, int32 InFromTileX, int32 InFromTileY, int32 InToTileX, int32 InToTileY, bool InConvertFromInstances);
    
    UFUNCTION(BlueprintCallable)
    ASHFleshLipCeilingTileActor* GetCeilingTileActorAtWorldLocation(const FVector& InWorldLocation, bool InConvertFromInstance);
    
    UFUNCTION(BlueprintCallable)
    ASHFleshLipCeilingTileActor* GetCeilingTileActorAtCoordinates(int32 InTileX, int32 InTileY, bool InConvertFromInstance);
    
    UFUNCTION(BlueprintPure)
    void GetCeilingSize(FVector2D& OutSize) const;
    
protected:
    UFUNCTION(BlueprintPure)
    void GetBarsFrameTileCoordinatesAroundTile(float& OutFrameMinX, float& OutFrameMinY, float& OutFrameMaxX, float& OutFrameMaxY, const FVector2D& InTileCoordinates, bool InInnerMax) const;
    
    UFUNCTION(BlueprintCallable)
    void DropCeilingTile(int32 InTileX, int32 InTileY, float InDropDelay, bool InOverrideExistingDelay, const FVector& InDropVelocity, const FVector& InDropRotation);
    
public:
    UFUNCTION(BlueprintPure)
    bool DoesCeilingTileAtWorldLocationExist(const FVector& InWorldLocation, bool InAllowDisconnected) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesCeilingTileAtCoordinatesExist(int32 InTileX, int32 InTileY, bool InAllowDisconnected) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyCeilingTilesAtWorldLocation(const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, bool InDropHangingNeighbours);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyCeilingTile(int32 InTileX, int32 InTileY, bool InDropHangingNeighbours);
    
    UFUNCTION(BlueprintCallable)
    void DamageCeilingTile(int32 InTileX, int32 InTileY, const FVector& InHitLocation, const FVector& InHitVelocity, float InMaximumDropRotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void BreakCeilingTilesAtWorldLocation(const FVector& InWorldLocation, float InRadius, bool InLimitedByBars, float InVerticalVelocity, float InHorizontalVelocity, float InMaximumRotation, const FSimpleBentCurve& InForceDistribution);
    
protected:
    UFUNCTION(BlueprintPure)
    bool AreTileCoordinatesValid(int32 InTileX, int32 InTileY) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyTilesPressure(const FVector& InWorldLocation, float InPushDepth, float InRadius, bool InLimitedByBars, bool InIfTileExistsAtLocation, float InParticlesSpawnAlphaThreshold);
    
};

