#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DaiAnimPlayParams.h"
#include "DaiConditions.h"
#include "DaiFunctions.h"
#include "EDaiDistanceType.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MaiBlackboardFloat.h"
#include "MaiBlackboardInt.h"
#include "MaiBlackboardValue.h"
#include "MaiFloatDiff.h"
#include "MaiTableOfBytesDiff.h"
#include "Templates/SubclassOf.h"
#include "MaiFunctions.generated.h"

class AAIController;
class AActor;
class ACharacter;
class AController;
class AMaiActionGraph;
class AMaiActionPoint;
class AMaiCharacter;
class AMaiController;
class AMaiFlyingGraph;
class ANavigationData;
class APawn;
class IInterface;
class UInterface;
class UAISense;
class UActorComponent;
class UAnimationAsset;
class UBTNode;
class UBeingAction;
class UBeingLocationTracker;
class UBlackboardComponent;
class UDaiCondition;
class UMaiManager;
class UMaiNodeSystem;
class UNavigationQueryFilter;
class UObject;
class UPathFollowingComponent;

UCLASS()
class MAI_API UMaiFunctions : public UDaiFunctions {
    GENERATED_BODY()
public:
    UMaiFunctions();

    UFUNCTION(BlueprintCallable)
    static void updateCrowdAgentParams(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool unregisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> sense, AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static void tests_Weights(const TArray<float>& raw, TArray<float>& Weights, bool inverse, float mul, float minClamp, float maxClamp);
    
    UFUNCTION(BlueprintPure)
    static int32 tests_HighestWeightIntex(const TArray<float>& Weights);
    
    UFUNCTION(BlueprintPure)
    static TArray<float> tests_Combine2(const TArray<float>& w1, const TArray<float>& w2);
    
    UFUNCTION(BlueprintPure)
    static void test_Dot(const TArray<AActor*>& Actors, TArray<float>& Results, FVector Origin, FVector Direction);
    
    UFUNCTION(BlueprintPure)
    static void test_Distance(const TArray<AActor*>& Actors, TArray<float>& Results, FVector Origin);
    
    UFUNCTION(BlueprintPure)
    static bool shouldIgnoreOther(AActor* Actor, AActor* Other);
    
    UFUNCTION(BlueprintPure)
    static bool shouldBeIgnored(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void setIgnoreOther(AActor* Actor, AActor* Other, bool ignore);
    
    UFUNCTION(BlueprintCallable)
    static void setIgnoreMe(AActor* Actor, bool ignore, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static bool setBlackboardValue(UBlackboardComponent* Blackboard, FMaiBlackboardValue Value);
    
    UFUNCTION(BlueprintPure)
    static APawn* selectBeingInFront(const TArray<APawn*>& beings, FVector Origin, FVector Direction, TSubclassOf<AActor> beingClass);
    
    UFUNCTION(BlueprintCallable)
    static void resumePathFollowing(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void resumeBehaviorTree(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void restartBehaviorTree(AAIController* Controller, bool hardReset);
    
    UFUNCTION(BlueprintCallable)
    static void resetEnemiesInRange(APawn* Being, float MaxRange);
    
    UFUNCTION(BlueprintCallable)
    static void resetBeing(APawn* Being);
    
    UFUNCTION(BlueprintCallable)
    static void resetAggressiveEnemies(APawn* Being);
    
    UFUNCTION(BlueprintCallable)
    static void requestDirectMoveTo(APawn* Being, FVector Location, bool bForceMaxSpeed, bool smoothCurves);
    
    UFUNCTION(BlueprintCallable)
    static void requestDirectMove(APawn* Being, FVector MoveVelocity, bool bForceMaxSpeed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool projectPointToNavigation(UObject* WorldContext, FVector& OutLocation, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable)
    static void pausePathFollowing(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void pauseBehaviorTree(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static bool isShootLineToOtherClear(AActor* Owner, AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    static bool isShootLineClear(FHitResult& HitResult, AActor* Owner, AActor* Other, FVector Start, FVector End);
    
    UFUNCTION(BlueprintPure)
    static bool isMovingToGoalLocation(APawn* Being);
    
    UFUNCTION(BlueprintCallable)
    static bool isMoveLineToOtherClear(AActor* Owner, AActor* Other);
    
    UFUNCTION(BlueprintCallable)
    static bool isMoveLineClear(FHitResult& HitResult, AActor* Owner, AActor* Other, FVector Start, FVector End);
    
    UFUNCTION(BlueprintPure)
    static bool isLocationInCone(const FVector& Origin, const FVector& Direction, float Angle, float Length, const FVector& Location, float Radius, float hheight, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static bool isInNarrowTrigger(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool isInNarrowArea(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInFullCover(AActor* Actor, FGameplayTag Filter);
    
    UFUNCTION(BlueprintPure)
    static bool IsInCover(AActor* Actor, FGameplayTag Filter);
    
    UFUNCTION(BlueprintPure)
    static bool isInChaseArea(AActor* Actor, FVector Location, float Extent);
    
    UFUNCTION(BlueprintPure)
    static bool isActorInCone(const FVector& Origin, const FVector& Direction, float Angle, float Length, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void initializePathFollower(UPathFollowingComponent* follower);
    
    UFUNCTION(BlueprintPure)
    static bool hasPathNearTo(APawn* Being, AActor* Actor, float Epsilon);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool getRandomLocationInNavigableRadius(UObject* WorldContext, FVector& OutLocation, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiNodeSystem* getPathNodeSystem(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UActorComponent* getManagerByClass(const UObject* WorldContext, TSubclassOf<UActorComponent> managerClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiManager* getMaiManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static AMaiController* getMaiControllerByClass(AActor* Actor, TSubclassOf<AMaiController> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static AMaiCharacter* getMaiCharacterByClass(AActor* Actor, TSubclassOf<AMaiCharacter> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static FVector getLocalDirectionTo(AActor* Origin, AActor* Other);
    
    UFUNCTION(BlueprintPure)
    static FVector getLocalDirection(AActor* Origin, FVector dir);
    
    UFUNCTION(BlueprintPure)
    static UObject* getJumpData(APawn* Being, float& lenght, float& Height);
    
    UFUNCTION(BlueprintPure)
    static void getGraphActionPoints(AMaiActionGraph* Graph, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static float getDifficultyFloat(const UObject* WorldContext, const FMaiFloatDiff& Value);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static uint8 getDifficultyByteFromTable(const UObject* WorldContext, const FMaiTableOfBytesDiff& Table, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FVector getCurrentTargetLocation(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static FVector getCurrentPathPointLocation(APawn* Being, int32 Point, bool fromStart);
    
    UFUNCTION(BlueprintPure)
    static FVector getCurrentGoalLocation(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static UObject* getCurrentCustomLinkOb(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static int32 getBlackboardInt(UBlackboardComponent* Blackboard, const FMaiBlackboardInt& Value);
    
    UFUNCTION(BlueprintPure)
    static FString getBlackboardInfo(AAIController* Controller);
    
    UFUNCTION(BlueprintPure)
    static float getBlackboardFloat(UBlackboardComponent* Blackboard, const FMaiBlackboardFloat& Value);
    
    UFUNCTION(BlueprintPure)
    static FString getBehaviorTreeInfo(AAIController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UBTNode* GetBehaviorTreeActiveNode(AAIController* Controller);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> getAttitudeTowards(APawn* Being, APawn* Other);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* getAnimOnNavByTags(AActor* Actor, FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* getAnimOnNavByAngle(AActor* Actor, FGameplayTagContainer Tags, float hangle, FDaiAnimPlayParams& playParams, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static void getAllGraphsActionPoints(UObject* Context, FName graphTag, TSubclassOf<AMaiActionGraph> graphClass, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintPure)
    static void getAllActorsActionPoints(UObject* Context, FName actorTag, TSubclassOf<AActor> ActorClass, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintPure)
    static void getAllActionPoints(UObject* Context, FName pointTag, TSubclassOf<AMaiActionPoint> pointClass, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintPure)
    static FTransform getAgentTransform(AActor* agent);
    
    UFUNCTION(BlueprintPure)
    static float getActorDistToNearestBeing(AActor* Actor, FName Tag, TSubclassOf<APawn> beingClass, APawn*& nearestBeing);
    
    UFUNCTION(BlueprintPure)
    static void getActorActionPoints(AActor* Actor, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintPure)
    static float get2D5DistanceTo(AActor* Origin, FVector Target, bool Overlap);
    
    UFUNCTION(BlueprintPure)
    static float get2D5DistanceBetween(AActor* Origin, AActor* Target, bool Overlap);
    
    UFUNCTION(BlueprintPure)
    static float get2D5Distance(FVector Origin, FVector Target, float heightTolerance, float radiusTolerance);
    
    UFUNCTION(BlueprintPure)
    static AMaiActionPoint* findRandomActionPoint(const TArray<AMaiActionPoint*>& inPoints, bool useWeights);
    
    UFUNCTION(BlueprintPure)
    static AMaiFlyingGraph* findNearestFlyingGraph(UObject* Context, FVector Location, FName graphTag, bool checkPoints);
    
    UFUNCTION(BlueprintPure)
    static APawn* findNearestBeingByTag(const UObject* Context, FVector Origin, FName Tag, TSubclassOf<APawn> beingClass);
    
    UFUNCTION(BlueprintPure)
    static AMaiActionPoint* findNearestActionPoint(const TArray<AMaiActionPoint*>& inPoints, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static AMaiActionGraph* findNearestActionGraph(UObject* Context, FVector Location, FName graphTag, bool checkPoints);
    
    UFUNCTION(BlueprintCallable)
    static bool findLastLocationNotInNarrowArea(FVector& Location, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static uint8 findHighestWeight(const TArray<AMaiActionPoint*>& inPoints);
    
    UFUNCTION(BlueprintPure)
    static AMaiActionPoint* findFarestActionPoint(const TArray<AMaiActionPoint*>& inPoints, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* findComponentFromAI(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
    static AActor* findArchEnemy(AMaiController* Controller);
    
    UFUNCTION(BlueprintPure)
    static bool findAllEnemies(AMaiController* Controller, TArray<AActor*>& enemies);
    
    UFUNCTION(BlueprintPure)
    static TArray<APawn*> findAllBeingsWithInterface(const UObject* Context, FName Tag, TSubclassOf<UInterface> beingInterface);
    
    UFUNCTION(BlueprintPure)
    static TArray<APawn*> findAllBeingsByTag(const UObject* Context, FName Tag, TSubclassOf<APawn> beingClass, bool includeDisabled);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_OnlyAlive(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_ByDistance(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, EDaiDistanceType distanceType, const FVector& Origin, float maxDist, float minDist);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_ByAttitude(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, APawn* Being, bool friendly, bool neutral, bool hostile);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_ByAngle(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, const FVector& Origin, const FVector& Direction, float Angle, bool inAngle);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_ByAggro(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, APawn* Being, bool neutral, bool cautious, bool aggressive);
    
    UFUNCTION(BlueprintPure)
    static void filterBeings_By2D5Distance(const TArray<APawn*>& inBeings, TArray<APawn*>& outBeings, AActor* Actor, float maxDist, float minDist);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_SortByRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_OutRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_IsSafe(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_InVisibilityRadius(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius, float perceptionMod);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_InsideRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Min, float Max);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_InRange(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_InDetectionArea(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, const FVector& Location, float areaExtent);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_ByWeight(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, uint8 ignoreWeight);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_ByUseConditions(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* User);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_ByConditions(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* caller, const FDaiConditions& Conditions);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_ByCondition(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* caller, UDaiCondition* Condition);
    
    UFUNCTION(BlueprintPure)
    static void filterActionPoints_ByClass(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, TSubclassOf<AMaiActionPoint> pointClass);
    
    UFUNCTION(BlueprintCallable)
    static void EnableBehaviorTree(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void drawLastLocations(UBeingLocationTracker* tracker, float Extent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool doesPathToLocationExists(UObject* WorldContext, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> filterClass);
    
    UFUNCTION(BlueprintCallable)
    static void DisableBehaviorTree(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void DisableActor(AActor* Actor, bool disable);
    
    UFUNCTION(BlueprintCallable)
    static void disableActionSync(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void clearPhysicsRotationDuringRootMotion(ACharacter* Being, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void clearBlackboard(AAIController* Controller);
    
    UFUNCTION(BlueprintPure)
    static bool canWalkOnWalls(APawn* Being);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool canGoDirectly(UObject* WorldContext, const FVector& PointA, const FVector& PointB, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> filterClass, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    static FVector calcDirLocation(APawn* Being, APawn* Target, FVector Source, float Radius, bool inversed);
    
    UFUNCTION(BlueprintPure)
    static FVector calcAvaragePosition(const TArray<AActor*>& Actors, const AActor* weighted);
    
    UFUNCTION(BlueprintCallable)
    static void allowPhysicsRotationDuringRootMotion(ACharacter* Being, bool allow, uint8 Priority);
    
    UFUNCTION(BlueprintPure)
    static bool actionsIsActive(const AController* Controller, TSubclassOf<UBeingAction> ActionClass);
    
    UFUNCTION(BlueprintPure)
    static bool actionsHasOfClass(const AController* Controller, TSubclassOf<UBeingAction> ActionClass);
    
    UFUNCTION(BlueprintPure)
    static bool actionsHasAny(const AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UBeingAction* actionsGetCurrent(const AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void actionsClearAll(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool actionsAdd(AController* Controller, UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void actionsAbortInstigatedBy(AController* Controller, const UObject* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void actionsAbortByPriority(AController* Controller, TEnumAsByte<EAIRequestPriority::Type> Priority, bool exact);
    
    UFUNCTION(BlueprintCallable)
    static void actionsAbortByClass(AController* Controller, TSubclassOf<UBeingAction> ActionClass, bool exact);
    
};

