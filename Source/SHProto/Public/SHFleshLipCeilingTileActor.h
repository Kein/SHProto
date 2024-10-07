#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHFleshLipCeilingTileActorDestroyedDelegate.h"
#include "SHFleshLipCeilingTileActorDisconnectedDelegate.h"
#include "SHFleshLipCeilingTileActor.generated.h"

UCLASS(Abstract, HideDropdown)
class SHPROTO_API ASHFleshLipCeilingTileActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSHFleshLipCeilingTileActorDisconnected EventCeilingTileDisconnected;
    
    UPROPERTY(BlueprintAssignable)
    FSHFleshLipCeilingTileActorDestroyed EventCeilingTileDestroyed;
    
    ASHFleshLipCeilingTileActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TileInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void TileDisconnected(bool InAsHanging, const FVector& InDropVelocity, const FVector& InDropRotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TileDamaged(const FVector& InHitLocation, const FVector& InDropVelocity, const FVector& InDropRotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIgnoreCollisionsWithActor_Implementation(AActor* InActor, bool InIgnoreCollision);
    
    UFUNCTION(BlueprintPure)
    int32 GetTileDamageLevel() const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetTileCoordinates(int32& OutTileX, int32& OutTileY) const;
    
    UFUNCTION(BlueprintCallable)
    void DisconnectCeilingTile(const FVector& InDropVelocity, const FVector& InDropRotation);
    
    UFUNCTION(BlueprintCallable)
    void DamageCeilingTile(const FVector& InHitLocation, const FVector& InDropVelocity, const FVector& InDropRotation);
    
};

