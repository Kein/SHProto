#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "MaiNodeData.h"
#include "MaiNodeRef.h"
#include "MaiNodeGraphComponent.generated.h"

class UMaiPathNodeComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiNodeGraphComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TMap<UMaiPathNodeComponent*, FMaiNodeRef> _PathNodes;
    
    UPROPERTY(AdvancedDisplay, Instanced, Transient, VisibleAnywhere)
    TArray<UMaiPathNodeComponent*> _NodesToUpdate;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FMaiNodeData> _AllNodesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _MaxConnectionsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> _CollisionChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FColor _Color;
    
    UMaiNodeGraphComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegenerateGraph();
    
    UFUNCTION(BlueprintPure)
    void GetNodesInRange(TArray<FMaiNodeRef>& nodesList, const FVector& Pos, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllNodes(TArray<FMaiNodeRef>& nodesList) const;
    
    UFUNCTION(BlueprintPure)
    UMaiPathNodeComponent* FindNearestNode(const FVector& Location) const;
    
};

