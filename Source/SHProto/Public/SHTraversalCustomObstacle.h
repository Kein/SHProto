#pragma once
#include "CoreMinimal.h"
#include "SHTraversalBase.h"
#include "SHTraversalCustomObstacle.generated.h"

class UPlaneSideDetectionComponent;
class USHGameplayMapObstacleComponent;
class USHInteractionIconComponent;
class USHTraversalObstacleComponent;
class USHTraversalObstacleIconManager;
class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class SHPROTO_API ASHTraversalCustomObstacle : public ASHTraversalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ObstacleMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* PlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* TraversalIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHTraversalObstacleComponent* TraversalObstacleComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHTraversalObstacleIconManager* TraversalIconManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHGameplayMapObstacleComponent* GameplayMapObject;
    
public:
    ASHTraversalCustomObstacle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize(TArray<USplineComponent*> InEdgeSplines);
    
};

