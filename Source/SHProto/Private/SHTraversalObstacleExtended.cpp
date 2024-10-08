#include "SHTraversalObstacleExtended.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlaneSideDetectionComponent.h"
#include "SHInteractionIconComponent.h"
#include "SHTraversalObstacleExtendedComponent.h"
#include "SHTraversalObstacleExtendedIconManager.h"

ASHTraversalObstacleExtended::ASHTraversalObstacleExtended(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMesh"));
    // this->PlaneSideDetectionComponent = CreateDefaultSubobject<UPlaneSideDetectionComponent>(TEXT("PlaneSideDetectionComponent"));
    // this->TeleportToComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TeleportToComponent"));
    // this->TraversalIcon = CreateDefaultSubobject<USHInteractionIconComponent>(TEXT("TraversalIcon"));
    // this->TraversalObstacleExtendedComponent = CreateDefaultSubobject<USHTraversalObstacleExtendedComponent>(TEXT("TraversalObstacleExtendedComponent"));
    // this->TraversalIconManager = CreateDefaultSubobject<USHTraversalObstacleExtendedIconManager>(TEXT("TraversalObstacleExtendedIconManager"));
    this->bTeleportOnPlayingEnd = false;
    // this->ObstacleMesh->SetupAttachment(RootComponent);
    // this->PlaneSideDetectionComponent->SetupAttachment(RootComponent);
    // this->TeleportToComponent->SetupAttachment(RootComponent);
    // this->TraversalIcon->SetupAttachment(RootComponent);
}


