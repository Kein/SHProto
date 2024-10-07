#include "SHTraversalObstacle.h"
#include "Components/StaticMeshComponent.h"
#include "PlaneSideDetectionComponent.h"
#include "SHGameplayMapObstacleComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHTraversalObstacleComponent.h"
#include "SHTraversalObstacleIconManager.h"

ASHTraversalObstacle::ASHTraversalObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMesh"));
    this->PlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("PlaneSideDetectionComponent"));
    this->TraversalIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("TraversalIcon"));
    this->TraversalObstacleComponent = CreateDefaultSubobject<USHTraversalObstacleComponent>(TEXT("TraversalObstacleComponent"));
    this->TraversalIconManager = CreateDefaultSubobject<USHTraversalObstacleIconManager>(TEXT("TraversalIconManager"));
    this->GameplayMapObject = CreateDefaultSubobject<USHGameplayMapObstacleComponent>(TEXT("GameplayMapObject"));
    this->ObstacleMesh->SetupAttachment(RootComponent);
    this->PlaneSideDetectionComponent->SetupAttachment(RootComponent);
    this->TraversalIcon->SetupAttachment(RootComponent);
}


