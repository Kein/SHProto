#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaiWallNavDraw.h"
#include "MaiWallNavGeneration.h"
#include "Templates/SubclassOf.h"
#include "MaiWallNavGenerator.generated.h"

class AActor;
class UMaiWallNavTile;
class UNavigationQueryFilter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiWallNavGenerator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> _DefaultNavigationFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaiWallNavGeneration _GenConfig;
    
    UPROPERTY(Instanced)
    TMap<int32, UMaiWallNavTile*> _Tiles;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    uint32 _BuildingTilesNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaiWallNavDraw _DrawConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> _TestPosA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> _TestPosB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> _AvoidActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AvoidDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AvoidCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OnFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OnWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _OnCeil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FloorCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _WallCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _CeilCost;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TArray<UMaiWallNavTile*> _TilesToBuild;
    
    UMaiWallNavGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Test_SlicedFindPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_IsOnNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_GenerateGrid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_FindRandomReachable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_FindPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_FindNearest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Test_CanGoto() const;
    
    UFUNCTION(BlueprintCallable)
    void RebuildNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void RebuildCell();
    
    UFUNCTION(BlueprintCallable)
    void BuildNavMesh();
    
};

