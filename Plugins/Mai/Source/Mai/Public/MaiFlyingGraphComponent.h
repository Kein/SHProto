#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "MaiFlyingGraphComponent.generated.h"

class AMaiFlyingPoint;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiFlyingGraphComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<AMaiFlyingPoint*> _ActionPoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AMaiFlyingPoint*> _PointsToUpdate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Height;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _MaxDist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _MaxConnectionsCount;
    
    UMaiFlyingGraphComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AMaiFlyingPoint* GetRandomPoint() const;
    
    UFUNCTION(BlueprintPure)
    void GetPointsInRange(TArray<AMaiFlyingPoint*>& actionPoints, const FVector& Pos, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    void GetPoints(TArray<AMaiFlyingPoint*>& actionPoints) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointCount() const;
    
    UFUNCTION(BlueprintPure)
    AMaiFlyingPoint* FindNearestPoint(const FVector& Location) const;
    
};

