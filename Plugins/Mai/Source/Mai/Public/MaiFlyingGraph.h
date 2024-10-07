#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MaiFlyingGraph.generated.h"

class AMaiController;
class AMaiFlyingPoint;
class APawn;
class UMaiFlyingGraphComponent;

UCLASS()
class MAI_API AMaiFlyingGraph : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiFlyingGraphComponent* _FlyingGraph;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<APawn*> _GraphWalkers;
    
    AMaiFlyingGraph(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AMaiFlyingPoint* GetRandomPoint(const TArray<AMaiFlyingPoint*>& actionPoints) const;
    
    UFUNCTION(BlueprintPure)
    void GetPointsInRange(TArray<AMaiFlyingPoint*>& actionPoints, const FVector& Pos, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    void GetPoints(TArray<AMaiFlyingPoint*>& actionPoints) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointCount() const;
    
    UFUNCTION(BlueprintPure)
    AMaiFlyingPoint* FindNearestPoint(const FVector& Location, float Radius, AMaiController* User) const;
    
};

