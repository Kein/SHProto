#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DaiBlockade.h"
#include "GameplayTagContainer.h"
#include "EMaiActionPointState.h"
#include "ENavMeshState.h"
#include "EPointSelection.h"
#include "MaiBlackboardData.h"
#include "MaiBlackboardValue.h"
#include "MaiMoveBlockedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MaiController.generated.h"

class AActor;
class AController;
class AMaiActionGraph;
class AMaiActionPoint;
class AMaiDebugger;
class ANavigationData;
class APawn;
class UAISense;
class UAISenseConfig;
class UBehaviorTree;
class UBeingAction;
class UBeingActionsComponent;
class UBlackboardData;
class UMaiActionSequenceComponent;
class UMaiWallFollowing;
class UNavigationQueryFilter;

UCLASS()
class MAI_API AMaiController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMaiWallFollowing* _WallWalking;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBeingActionsComponent* _ActionsComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    TSoftObjectPtr<AMaiActionGraph> _SoftActionGraph;
    
    UPROPERTY(BlueprintReadOnly)
    AMaiActionGraph* _ActionGraph;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    AMaiActionPoint* _CurrentActionPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    AMaiActionPoint* _LastGraphPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    AMaiActionPoint* _LastPathPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    AMaiActionPoint* _NextActionPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    AMaiActionPoint* _AbandonActionPoint;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TMap<AMaiActionPoint*, float> _PointCooldowns;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleInstanceOnly)
    UMaiActionSequenceComponent* _ActionPointSequence;
    
    UPROPERTY(VisibleInstanceOnly)
    EMaiActionPointState _CapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _NotifyOnReselect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _SetAcceptableRadiusFromAP: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _HistorySize;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> _LocationFilterClass;
    
    UPROPERTY()
    FVector _WorkLocation;
    
    UPROPERTY()
    bool _DisableControlRotation;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSoftObjectPtr<UBehaviorTree> _SoftBehaviorTree;
    
protected:
    UPROPERTY(EditAnywhere)
    UBlackboardData* _BlackboardAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaiBlackboardValue> _BlackboardConfig;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FDaiBlockade _BlockBT;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FDaiBlockade _PauseBT;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<FName> _BehaviorStack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FMaiBlackboardData _BlackboardData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _BBBlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _BBCurrentActionPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _BBDespawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _BBHomeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _BBPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENavMeshState _WaitForNavMesh;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMaiMoveBlocked OnMoveBlocked;
    
    AMaiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UsedCurrentActionPoint();
    
    UFUNCTION(BlueprintPure)
    FName TopBehaviorName() const;
    
    UFUNCTION(BlueprintCallable)
    bool TeleportTowards(const FVector& Location, float Distance);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportInFrontOf(AActor* Actor, float Distance);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportFrom(const FVector& Location, float Distance, bool forceDirect);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyID(uint8 partyID);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalActionPoint(AMaiActionPoint* goalPoint, AMaiActionPoint* subgoalPoint, FName sequenceTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDespawnLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentActionPoint(AMaiActionPoint* actionPoint, bool Reset);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActionGraph(AMaiActionGraph* pointGraph);
    
    UFUNCTION(BlueprintCallable)
    bool SelectNextActionPoint(EPointSelection Method, AActor* Origin);
    
    UFUNCTION(BlueprintCallable)
    void SelectNearestActionGraph(FName graphTag);
    
    UFUNCTION(BlueprintCallable)
    bool SelectActionPoint(TMap<AMaiActionPoint*, uint8> actionPoints, EPointSelection Method, AActor* Origin);
    
    UFUNCTION(BlueprintCallable)
    void SaveBlackboard();
    
    UFUNCTION(BlueprintCallable)
    void SaveActorPointer(FName Key, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RunActionPointWaitWork(FGameplayTag InjectTag, AMaiActionPoint* actionPoint);
    
    UFUNCTION(BlueprintCallable)
    void RunActionPointActions(FGameplayTag InjectTag, AMaiActionPoint* actionPoint);
    
    UFUNCTION(BlueprintCallable)
    static void reportTouchEvent(AController* TouchReceiver, AActor* Other, FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    uint8 ReceiveTokens(uint8 pool);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivedAttackSlot();
    
    UFUNCTION(BlueprintCallable)
    void ReachCurrentActionPoint(FGameplayTag InjectTag, bool runActions);
    
    UFUNCTION(BlueprintCallable)
    void PushBehaviorName(FName behaviorName);
    
    UFUNCTION(BlueprintCallable)
    static void pushAction(AAIController* AIController, UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    void PopBehaviorName(FName behaviorName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPointerLoaded(FName Key, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPerceived(AActor* Actor, const FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNavigationData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitBehaviors();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointSelected(AMaiActionPoint* actionPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointReached(AMaiActionPoint* actionPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionPointAbandoned(AMaiActionPoint* actionPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionGraphChanged(AMaiActionGraph* actionGraph);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LostToken();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LostAttackSlot();
    
    UFUNCTION(BlueprintCallable)
    void LoadBlackboard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLocationSafe(const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    bool IsIndoor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentWayPointReached() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentlyPerceived(AActor* Actor, bool onlyHostile, FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentActionPointReached() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBehaviorTreeRunning() const;
    
    UFUNCTION(BlueprintCallable)
    void IgnorePoint(AMaiActionPoint* Point, float cooldown);
    
    UFUNCTION(BlueprintPure)
    bool HavePlaceToAvoid(APawn* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool HasValidNavData() const;
    
    UFUNCTION(BlueprintPure)
    bool HasBehaviorName(FName behaviorName) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyBehaviorName(const TArray<FName>& behaviorNames) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyAction() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAction(TSubclassOf<UBeingAction> ActionClass) const;
    
    UFUNCTION(BlueprintPure)
    float GetYoungestStimulusAge(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorkLocation() const;
    
    UFUNCTION(BlueprintPure)
    UMaiWallFollowing* GetWallPathFollowing();
    
    UFUNCTION(BlueprintPure)
    UAISenseConfig* GetSenseConfig(TSubclassOf<UAISense> SenseClass);
    
    UFUNCTION(BlueprintPure)
    AMaiActionPoint* GetPrevActionPoint() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetPartyID() const;
    
    UFUNCTION(BlueprintPure)
    ANavigationData* GetNavData() const;
    
    UFUNCTION(BlueprintPure)
    AMaiActionGraph* GetActionGraph();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FilterGraphPointsScript(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints, AActor* Origin);
    
    UFUNCTION(BlueprintPure)
    void FilterActionPointsByCooldown(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints);
    
    UFUNCTION(BlueprintCallable)
    void EnableBehaviorTree(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void DisableBehaviorTree(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void DebugLog(const FString& Log, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void ChangeWorkLocation();
    
    UFUNCTION(BlueprintNativeEvent)
    void AIDebuggerTick(AMaiDebugger* debugger, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void abortAllActions(AAIController* AIController, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void abortAction(AAIController* AIController, TSubclassOf<UBeingAction> ActionClass);
    
    UFUNCTION(BlueprintCallable)
    void AbandonActionPoint(AMaiActionPoint* actionPoint, bool immediately);
    
};

