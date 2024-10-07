#include "MaiFunctions.h"
#include "Templates/SubclassOf.h"

UMaiFunctions::UMaiFunctions() {
}

void UMaiFunctions::updateCrowdAgentParams(AActor* Actor) {
}

bool UMaiFunctions::unregisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> sense, AActor* Target) {
    return false;
}

void UMaiFunctions::tests_Weights(const TArray<float>& raw, TArray<float>& Weights, bool inverse, float mul, float minClamp, float maxClamp) {
}

int32 UMaiFunctions::tests_HighestWeightIntex(const TArray<float>& Weights) {
    return 0;
}

TArray<float> UMaiFunctions::tests_Combine2(const TArray<float>& w1, const TArray<float>& w2) {
    return TArray<float>();
}

void UMaiFunctions::test_Dot(const TArray<AActor*>& Actors, TArray<float>& Results, FVector Origin, FVector Direction) {
}

void UMaiFunctions::test_Distance(const TArray<AActor*>& Actors, TArray<float>& Results, FVector Origin) {
}

bool UMaiFunctions::shouldIgnoreOther(AActor* Actor, AActor* Other) {
    return false;
}

bool UMaiFunctions::shouldBeIgnored(AActor* Actor) {
    return false;
}

void UMaiFunctions::setIgnoreOther(AActor* Actor, AActor* Other, bool ignore) {
}

void UMaiFunctions::setIgnoreMe(AActor* Actor, bool ignore, FName Reason) {
}

bool UMaiFunctions::setBlackboardValue(UBlackboardComponent* Blackboard, FMaiBlackboardValue Value) {
    return false;
}

APawn* UMaiFunctions::selectBeingInFront(const TArray<APawn*>& beings, FVector Origin, FVector Direction, TSubclassOf<AActor> beingClass) {
    return NULL;
}

void UMaiFunctions::resumePathFollowing(AAIController* Controller) {
}

void UMaiFunctions::resumeBehaviorTree(AActor* Actor, FName Reason) {
}

void UMaiFunctions::restartBehaviorTree(AAIController* Controller, bool hardReset) {
}

void UMaiFunctions::resetEnemiesInRange(APawn* Being, float MaxRange) {
}

void UMaiFunctions::resetBeing(APawn* Being) {
}

void UMaiFunctions::resetAggressiveEnemies(APawn* Being) {
}

void UMaiFunctions::requestDirectMoveTo(APawn* Being, FVector Location, bool bForceMaxSpeed, bool smoothCurves) {
}

void UMaiFunctions::requestDirectMove(APawn* Being, FVector MoveVelocity, bool bForceMaxSpeed) {
}

bool UMaiFunctions::projectPointToNavigation(UObject* WorldContext, FVector& OutLocation, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass, const FVector QueryExtent) {
    return false;
}

void UMaiFunctions::pausePathFollowing(AAIController* Controller) {
}

void UMaiFunctions::pauseBehaviorTree(AActor* Actor, FName Reason) {
}

bool UMaiFunctions::isShootLineToOtherClear(AActor* Owner, AActor* Other) {
    return false;
}

bool UMaiFunctions::isShootLineClear(FHitResult& HitResult, AActor* Owner, AActor* Other, FVector Start, FVector End) {
    return false;
}

bool UMaiFunctions::isMovingToGoalLocation(APawn* Being) {
    return false;
}

bool UMaiFunctions::isMoveLineToOtherClear(AActor* Owner, AActor* Other) {
    return false;
}

bool UMaiFunctions::isMoveLineClear(FHitResult& HitResult, AActor* Owner, AActor* Other, FVector Start, FVector End) {
    return false;
}

bool UMaiFunctions::isLocationInCone(const FVector& Origin, const FVector& Direction, float Angle, float Length, const FVector& Location, float Radius, float hheight, FRotator Rotation) {
    return false;
}

bool UMaiFunctions::isInNarrowTrigger(AActor* Actor) {
    return false;
}

bool UMaiFunctions::isInNarrowArea(AActor* Actor) {
    return false;
}

bool UMaiFunctions::IsInFullCover(AActor* Actor, FGameplayTag Filter) {
    return false;
}

bool UMaiFunctions::IsInCover(AActor* Actor, FGameplayTag Filter) {
    return false;
}

bool UMaiFunctions::isInChaseArea(AActor* Actor, FVector Location, float Extent) {
    return false;
}

bool UMaiFunctions::isActorInCone(const FVector& Origin, const FVector& Direction, float Angle, float Length, AActor* Actor) {
    return false;
}

void UMaiFunctions::initializePathFollower(UPathFollowingComponent* follower) {
}

bool UMaiFunctions::hasPathNearTo(APawn* Being, AActor* Actor, float Epsilon) {
    return false;
}

bool UMaiFunctions::getRandomLocationInNavigableRadius(UObject* WorldContext, FVector& OutLocation, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass) {
    return false;
}

UMaiNodeSystem* UMaiFunctions::getPathNodeSystem(UObject* WorldContext) {
    return NULL;
}

UActorComponent* UMaiFunctions::getManagerByClass(const UObject* WorldContext, TSubclassOf<UActorComponent> managerClass) {
    return NULL;
}

UMaiManager* UMaiFunctions::getMaiManager(UObject* WorldContext) {
    return NULL;
}

AMaiController* UMaiFunctions::getMaiControllerByClass(AActor* Actor, TSubclassOf<AMaiController> ActorClass) {
    return NULL;
}

AMaiCharacter* UMaiFunctions::getMaiCharacterByClass(AActor* Actor, TSubclassOf<AMaiCharacter> ActorClass) {
    return NULL;
}

FVector UMaiFunctions::getLocalDirectionTo(AActor* Origin, AActor* Other) {
    return FVector{};
}

FVector UMaiFunctions::getLocalDirection(AActor* Origin, FVector dir) {
    return FVector{};
}

UObject* UMaiFunctions::getJumpData(APawn* Being, float& lenght, float& Height) {
    return NULL;
}

void UMaiFunctions::getGraphActionPoints(AMaiActionGraph* Graph, TArray<AMaiActionPoint*>& outPoints) {
}

float UMaiFunctions::getDifficultyFloat(const UObject* WorldContext, const FMaiFloatDiff& Value) {
    return 0.0f;
}

uint8 UMaiFunctions::getDifficultyByteFromTable(const UObject* WorldContext, const FMaiTableOfBytesDiff& Table, int32 Index) {
    return 0;
}

FVector UMaiFunctions::getCurrentTargetLocation(APawn* Being) {
    return FVector{};
}

FVector UMaiFunctions::getCurrentPathPointLocation(APawn* Being, int32 Point, bool fromStart) {
    return FVector{};
}

FVector UMaiFunctions::getCurrentGoalLocation(APawn* Being) {
    return FVector{};
}

UObject* UMaiFunctions::getCurrentCustomLinkOb(APawn* Being) {
    return NULL;
}

int32 UMaiFunctions::getBlackboardInt(UBlackboardComponent* Blackboard, const FMaiBlackboardInt& Value) {
    return 0;
}

FString UMaiFunctions::getBlackboardInfo(AAIController* Controller) {
    return TEXT("");
}

float UMaiFunctions::getBlackboardFloat(UBlackboardComponent* Blackboard, const FMaiBlackboardFloat& Value) {
    return 0.0f;
}

FString UMaiFunctions::getBehaviorTreeInfo(AAIController* Controller) {
    return TEXT("");
}

UBTNode* UMaiFunctions::GetBehaviorTreeActiveNode(AAIController* Controller) {
    return NULL;
}

TEnumAsByte<ETeamAttitude::Type> UMaiFunctions::getAttitudeTowards(APawn* Being, APawn* Other) {
    return ETeamAttitude::Friendly;
}

UAnimationAsset* UMaiFunctions::getAnimOnNavByTags(AActor* Actor, FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams, bool checkComponents) {
    return NULL;
}

UAnimationAsset* UMaiFunctions::getAnimOnNavByAngle(AActor* Actor, FGameplayTagContainer Tags, float hangle, FDaiAnimPlayParams& playParams, bool checkComponents) {
    return NULL;
}

void UMaiFunctions::getAllGraphsActionPoints(UObject* Context, FName graphTag, TSubclassOf<AMaiActionGraph> graphClass, TArray<AMaiActionPoint*>& outPoints) {
}

void UMaiFunctions::getAllActorsActionPoints(UObject* Context, FName actorTag, TSubclassOf<AActor> ActorClass, TArray<AMaiActionPoint*>& outPoints) {
}

void UMaiFunctions::getAllActionPoints(UObject* Context, FName pointTag, TSubclassOf<AMaiActionPoint> pointClass, TArray<AMaiActionPoint*>& outPoints) {
}

FTransform UMaiFunctions::getAgentTransform(AActor* agent) {
    return FTransform{};
}

float UMaiFunctions::getActorDistToNearestBeing(AActor* Actor, FName Tag, TSubclassOf<APawn> beingClass, APawn*& nearestBeing) {
    return 0.0f;
}

void UMaiFunctions::getActorActionPoints(AActor* Actor, TArray<AMaiActionPoint*>& outPoints) {
}

float UMaiFunctions::get2D5DistanceTo(AActor* Origin, FVector Target, bool Overlap) {
    return 0.0f;
}

float UMaiFunctions::get2D5DistanceBetween(AActor* Origin, AActor* Target, bool Overlap) {
    return 0.0f;
}

float UMaiFunctions::get2D5Distance(FVector Origin, FVector Target, float heightTolerance, float radiusTolerance) {
    return 0.0f;
}

AMaiActionPoint* UMaiFunctions::findRandomActionPoint(const TArray<AMaiActionPoint*>& inPoints, bool useWeights) {
    return NULL;
}

AMaiFlyingGraph* UMaiFunctions::findNearestFlyingGraph(UObject* Context, FVector Location, FName graphTag, bool checkPoints) {
    return NULL;
}

APawn* UMaiFunctions::findNearestBeingByTag(const UObject* Context, FVector Origin, FName Tag, TSubclassOf<APawn> beingClass) {
    return NULL;
}

AMaiActionPoint* UMaiFunctions::findNearestActionPoint(const TArray<AMaiActionPoint*>& inPoints, const FVector& Location) {
    return NULL;
}

AMaiActionGraph* UMaiFunctions::findNearestActionGraph(UObject* Context, FVector Location, FName graphTag, bool checkPoints) {
    return NULL;
}

bool UMaiFunctions::findLastLocationNotInNarrowArea(FVector& Location, AActor* Actor) {
    return false;
}

uint8 UMaiFunctions::findHighestWeight(const TArray<AMaiActionPoint*>& inPoints) {
    return 0;
}

AMaiActionPoint* UMaiFunctions::findFarestActionPoint(const TArray<AMaiActionPoint*>& inPoints, const FVector& Location) {
    return NULL;
}

UActorComponent* UMaiFunctions::findComponentFromAI(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

AActor* UMaiFunctions::findArchEnemy(AMaiController* Controller) {
    return NULL;
}

bool UMaiFunctions::findAllEnemies(AMaiController* Controller, TArray<AActor*>& enemies) {
    return false;
}

TArray<APawn*> UMaiFunctions::findAllBeingsWithInterface(const UObject* Context, FName Tag, TSubclassOf<UInterface> beingInterface) {
    return TArray<APawn*>();
}

TArray<APawn*> UMaiFunctions::findAllBeingsByTag(const UObject* Context, FName Tag, TSubclassOf<APawn> beingClass, bool includeDisabled) {
    return TArray<APawn*>();
}

void UMaiFunctions::filterBeings_OnlyAlive(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings) {
}

void UMaiFunctions::filterBeings_ByDistance(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, EDaiDistanceType distanceType, const FVector& Origin, float maxDist, float minDist) {
}

void UMaiFunctions::filterBeings_ByAttitude(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, APawn* Being, bool friendly, bool neutral, bool hostile) {
}

void UMaiFunctions::filterBeings_ByAngle(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, const FVector& Origin, const FVector& Direction, float Angle, bool inAngle) {
}

void UMaiFunctions::filterBeings_ByAggro(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, APawn* Being, bool neutral, bool cautious, bool aggressive) {
}

void UMaiFunctions::filterBeings_By2D5Distance(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, AActor* Actor, float maxDist, float minDist) {
}

void UMaiFunctions::filterActionPoints_SortByRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location) {
}

void UMaiFunctions::filterActionPoints_OutRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius) {
}

void UMaiFunctions::filterActionPoints_IsSafe(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* Actor) {
}

void UMaiFunctions::filterActionPoints_InVisibilityRadius(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius, float perceptionMod) {
}

void UMaiFunctions::filterActionPoints_InsideRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Min, float Max) {
}

void UMaiFunctions::filterActionPoints_InRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius) {
}

void UMaiFunctions::filterActionPoints_InDetectionArea(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float areaExtent) {
}

void UMaiFunctions::filterActionPoints_ByWeight(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, uint8 ignoreWeight) {
}

void UMaiFunctions::filterActionPoints_ByUseConditions(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* User) {
}

void UMaiFunctions::filterActionPoints_ByConditions(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* caller, const FDaiConditions& Conditions) {
}

void UMaiFunctions::filterActionPoints_ByCondition(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* caller, UDaiCondition* Condition) {
}

void UMaiFunctions::filterActionPoints_ByClass(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, TSubclassOf<AMaiActionPoint> pointClass) {
}

void UMaiFunctions::EnableBehaviorTree(AActor* Actor, FName Reason) {
}

void UMaiFunctions::drawLastLocations(UBeingLocationTracker* tracker, float Extent) {
}

bool UMaiFunctions::doesPathToLocationExists(UObject* WorldContext, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> filterClass) {
    return false;
}

void UMaiFunctions::DisableBehaviorTree(AActor* Actor, FName Reason) {
}

void UMaiFunctions::DisableActor(AActor* Actor, bool disable) {
}

void UMaiFunctions::disableActionSync(AActor* Actor) {
}

void UMaiFunctions::clearPhysicsRotationDuringRootMotion(ACharacter* Being, uint8 Priority) {
}

void UMaiFunctions::clearBlackboard(AAIController* Controller) {
}

bool UMaiFunctions::canWalkOnWalls(APawn* Being) {
    return false;
}

bool UMaiFunctions::canGoDirectly(UObject* WorldContext, const FVector& PointA, const FVector& PointB, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass, float Tolerance) {
    return false;
}

FVector UMaiFunctions::calcDirLocation(APawn* Being, APawn* Target, FVector Source, float Radius, bool inversed) {
    return FVector{};
}

FVector UMaiFunctions::calcAvaragePosition(const TArray<AActor*>& Actors, const AActor* weighted) {
    return FVector{};
}

void UMaiFunctions::allowPhysicsRotationDuringRootMotion(ACharacter* Being, bool allow, uint8 Priority) {
}

bool UMaiFunctions::actionsIsActive(const AController* Controller, TSubclassOf<UBeingAction> ActionClass) {
    return false;
}

bool UMaiFunctions::actionsHasOfClass(const AController* Controller, TSubclassOf<UBeingAction> ActionClass) {
    return false;
}

bool UMaiFunctions::actionsHasAny(const AController* Controller) {
    return false;
}

UBeingAction* UMaiFunctions::actionsGetCurrent(const AController* Controller) {
    return NULL;
}

void UMaiFunctions::actionsClearAll(AController* Controller) {
}

bool UMaiFunctions::actionsAdd(AController* Controller, UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* InstigatedBy) {
    return false;
}

void UMaiFunctions::actionsAbortInstigatedBy(AController* Controller, const UObject* InstigatedBy) {
}

void UMaiFunctions::actionsAbortByPriority(AController* Controller, TEnumAsByte<EAIRequestPriority::Type> Priority, bool exact) {
}

void UMaiFunctions::actionsAbortByClass(AController* Controller, TSubclassOf<UBeingAction> ActionClass, bool exact) {
}


