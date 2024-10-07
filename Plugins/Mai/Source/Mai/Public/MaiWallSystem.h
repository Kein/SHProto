#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallSystem.generated.h"

class AMaiWallVolume;
class ANodeGraphTester;
class UMaiPathNodeComponent;
class UMaiWallSystem;

UCLASS(BlueprintType)
class MAI_API UMaiWallSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AMaiWallVolume*> _WallVolumes;
    
    UPROPERTY(Instanced)
    TArray<UMaiPathNodeComponent*> _AllPathNodes;
    
    UPROPERTY()
    TArray<ANodeGraphTester*> _PathTesters;
    
    UMaiWallSystem();

    UFUNCTION(BlueprintPure)
    bool RaycastOnWallMesh(FVector& HitPoint, FVector Start, FVector Destination, FVector startUp, FVector destUp) const;
    
    UFUNCTION(BlueprintPure)
    bool ProjectPointOnWallMesh(FVector& outpoint, FVector Pos, FVector Up, FVector Extent, FVector Offset) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnWallMesh(FVector Pos, FVector Up, FVector Extent) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiWallSystem* getWallSystem(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    bool FindReachablePointOnWallMesh(FVector& outpoint, float Radius, FVector Pos, FVector Up) const;
    
    UFUNCTION(BlueprintPure)
    bool FindRandomPointOnWallMesh(FVector& outpoint, float Radius, FVector Pos, FVector Up, FVector Extent) const;
    
    UFUNCTION(Exec)
    void AIWallMesh_RebuildCell();
    
};

