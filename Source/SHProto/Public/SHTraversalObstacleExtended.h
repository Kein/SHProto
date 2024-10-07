#pragma once
#include "CoreMinimal.h"
#include "SHTraversalBase.h"
#include "SHTraversalObstacleExtended.generated.h"

class UCapsuleComponent;
class UPlaneSideDetectionComponent;
class USHInteractionIconComponent;
class USHTraversalObstacleExtendedComponent;
class USHTraversalObstacleExtendedIconManager;
class UStaticMeshComponent;

UCLASS()
class ASHTraversalObstacleExtended : public ASHTraversalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* ObstacleMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPlaneSideDetectionComponent* PlaneSideDetectionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* TeleportToComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHInteractionIconComponent* TraversalIcon;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHTraversalObstacleExtendedComponent* TraversalObstacleExtendedComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHTraversalObstacleExtendedIconManager* TraversalIconManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTeleportOnPlayingEnd;
    
public:
    ASHTraversalObstacleExtended(const FObjectInitializer& ObjectInitializer);

};

