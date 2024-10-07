#include "MaiController.h"
#include "MaiFollowingComponent.h"
#include "Templates/SubclassOf.h"

AMaiController::AMaiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMaiFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->_WallWalking = NULL;
    this->_ActionsComponent = NULL;
    this->_ActionGraph = NULL;
    this->_CurrentActionPoint = NULL;
    this->_LastGraphPoint = NULL;
    this->_LastPathPoint = NULL;
    this->_NextActionPoint = NULL;
    this->_AbandonActionPoint = NULL;
    this->_ActionPointSequence = NULL;
    this->_CapState = EMaiActionPointState::None;
    this->_NotifyOnReselect = false;
    this->_SetAcceptableRadiusFromAP = false;
    this->_HistorySize = 3;
    this->_LocationFilterClass = NULL;
    this->_DisableControlRotation = false;
    this->_BlackboardAsset = NULL;
    this->_BBBlocked = TEXT("Blocked");
    this->_BBCurrentActionPoint = TEXT("CurrentActionPoint");
    this->_BBDespawnLocation = TEXT("DespawnLocation");
    this->_BBHomeLocation = TEXT("HomeLocation");
    this->_BBPlayer = TEXT("Player");
    this->_WaitForNavMesh = ENavMeshState::Loaded;
}

void AMaiController::UsedCurrentActionPoint() {
}

FName AMaiController::TopBehaviorName() const {
    return NAME_None;
}

bool AMaiController::TeleportTowards(const FVector& Location, float Distance) {
    return false;
}

bool AMaiController::TeleportInFrontOf(AActor* Actor, float Distance) {
    return false;
}

bool AMaiController::TeleportFrom(const FVector& Location, float Distance, bool forceDirect) {
    return false;
}

void AMaiController::SetPartyID(uint8 partyID) {
}

void AMaiController::SetGoalActionPoint(AMaiActionPoint* goalPoint, AMaiActionPoint* subgoalPoint, FName sequenceTag) {
}

void AMaiController::SetDespawnLocation(FVector Location) {
}

bool AMaiController::SetCurrentActionPoint(AMaiActionPoint* actionPoint, bool Reset) {
    return false;
}

void AMaiController::SetCurrentActionGraph(AMaiActionGraph* pointGraph) {
}

bool AMaiController::SelectNextActionPoint(EPointSelection Method, AActor* Origin) {
    return false;
}

void AMaiController::SelectNearestActionGraph(FName graphTag) {
}

bool AMaiController::SelectActionPoint(TMap<AMaiActionPoint*, uint8> actionPoints, EPointSelection Method, AActor* Origin) {
    return false;
}

void AMaiController::SaveBlackboard() {
}

void AMaiController::SaveActorPointer(FName Key, AActor* Actor) {
}

void AMaiController::RunActionPointWaitWork(FGameplayTag InjectTag, AMaiActionPoint* actionPoint) {
}

void AMaiController::RunActionPointActions(FGameplayTag InjectTag, AMaiActionPoint* actionPoint) {
}

void AMaiController::reportTouchEvent(AController* TouchReceiver, AActor* Other, FVector Location) {
}



void AMaiController::ReachCurrentActionPoint(FGameplayTag InjectTag, bool runActions) {
}

void AMaiController::PushBehaviorName(FName behaviorName) {
}

void AMaiController::pushAction(AAIController* AIController, UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, AActor* InstigatedBy) {
}

void AMaiController::PopBehaviorName(FName behaviorName) {
}











void AMaiController::LoadBlackboard() {
}

bool AMaiController::IsLocationSafe_Implementation(const FVector& Location) {
    return false;
}

bool AMaiController::IsIndoor() const {
    return false;
}

bool AMaiController::IsCurrentWayPointReached() const {
    return false;
}

bool AMaiController::IsCurrentlyPerceived(AActor* Actor, bool onlyHostile, FAIStimulus& Stimulus) {
    return false;
}

bool AMaiController::IsCurrentActionPointReached() const {
    return false;
}

bool AMaiController::IsBehaviorTreeRunning() const {
    return false;
}

void AMaiController::IgnorePoint(AMaiActionPoint* Point, float cooldown) {
}

bool AMaiController::HavePlaceToAvoid(APawn* Other) const {
    return false;
}

bool AMaiController::HasValidNavData() const {
    return false;
}

bool AMaiController::HasBehaviorName(FName behaviorName) const {
    return false;
}

bool AMaiController::HasAnyBehaviorName(const TArray<FName>& behaviorNames) const {
    return false;
}

bool AMaiController::HasAnyAction() const {
    return false;
}

bool AMaiController::HasAction(TSubclassOf<UBeingAction> ActionClass) const {
    return false;
}

float AMaiController::GetYoungestStimulusAge(const AActor* Actor) const {
    return 0.0f;
}

FVector AMaiController::GetWorkLocation() const {
    return FVector{};
}

UMaiWallFollowing* AMaiController::GetWallPathFollowing() {
    return NULL;
}

UAISenseConfig* AMaiController::GetSenseConfig(TSubclassOf<UAISense> SenseClass) {
    return NULL;
}

AMaiActionPoint* AMaiController::GetPrevActionPoint() const {
    return NULL;
}

uint8 AMaiController::GetPartyID() const {
    return 0;
}

ANavigationData* AMaiController::GetNavData() const {
    return NULL;
}

AMaiActionGraph* AMaiController::GetActionGraph() {
    return NULL;
}


void AMaiController::FilterActionPointsByCooldown(const TArray<AMaiActionPoint*>& inPoints, TArray<AMaiActionPoint*>& outPoints) {
}

void AMaiController::EnableBehaviorTree(FName Reason) {
}

void AMaiController::DisableBehaviorTree(FName Reason) {
}

void AMaiController::DebugLog(const FString& Log, FLinearColor Color) {
}

void AMaiController::ChangeWorkLocation() {
}

void AMaiController::AIDebuggerTick_Implementation(AMaiDebugger* debugger, float DeltaSeconds) {
}

void AMaiController::abortAllActions(AAIController* AIController, AActor* InstigatedBy) {
}

void AMaiController::abortAction(AAIController* AIController, TSubclassOf<UBeingAction> ActionClass) {
}

void AMaiController::AbandonActionPoint(AMaiActionPoint* actionPoint, bool immediately) {
}


