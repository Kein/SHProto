#include "MaiDebugger.h"
#include "MaiSenseDebugger.h"

AMaiDebugger::AMaiDebugger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllSenses = CreateDefaultSubobject<UMaiSenseDebugger>(TEXT("AllSenses"));
    this->HearingSense = CreateDefaultSubobject<UMaiSenseDebugger>(TEXT("HearingSense"));
    this->SightSense = CreateDefaultSubobject<UMaiSenseDebugger>(TEXT("SightSense"));
    this->SmellSense = CreateDefaultSubobject<UMaiSenseDebugger>(TEXT("SmellSense"));
    this->_DebugAutoActive = false;
    this->_DebugActive = false;
    this->_DebugHearing = false;
    this->_DebugSight = false;
    this->_DebugSmell = false;
    this->_DebugNoises = false;
    this->_DebugVisibility = false;
    this->_DebugOdor = false;
    this->_DebugAggro = false;
    this->_DebugAttack = false;
    this->_DebugCuriosity = false;
    this->_DebugActionPath = false;
    this->_DebugNavPath = false;
    this->_DebugMovement = false;
    this->_DebugUnreal = false;
    this->_DebugNavMesh = false;
    this->_DebugAInfo = false;
    this->_DebugBehaviorTree = false;
    this->_DebugEQS = false;
    this->_DebugPerception = false;
    this->_DisableExtensions = false;
}

bool AMaiDebugger::getAIDebugVisibility(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugState(APawn* Being, FName Name) {
    return false;
}

bool AMaiDebugger::getAIDebugSmell(UObject* WorldContext) {
    return false;
}

bool AMaiDebugger::getAIDebugSight(UObject* WorldContext) {
    return false;
}

bool AMaiDebugger::getAIDebugOdor(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugNoises(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugNavPath(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugMovement(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugHearing(UObject* WorldContext) {
    return false;
}

bool AMaiDebugger::getAIDebugGState(UObject* WorldContext, FName Name) {
    return false;
}

AMaiDebugger* AMaiDebugger::getAIDebugger(UObject* WorldContext, bool onlyIfActive) {
    return NULL;
}

bool AMaiDebugger::getAIDebugCuriosity(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugAttack(APawn* Being) {
    return false;
}

bool AMaiDebugger::getAIDebugAggro(APawn* Being) {
    return false;
}

AActor* AMaiDebugger::getAIDebugActor(UObject* WorldContext) {
    return NULL;
}

bool AMaiDebugger::getAIDebugActionPath(APawn* Being) {
    return false;
}

void AMaiDebugger::AIDebugVisibility(bool Debug) {
}

void AMaiDebugger::AIDebugUnreal(bool Debug) {
}

void AMaiDebugger::AIDebugState(FName Name, bool Debug) {
}

void AMaiDebugger::AIDebugSpectator() {
}

void AMaiDebugger::AIDebugSmell(bool Debug) {
}

void AMaiDebugger::AIDebugSight(bool Debug) {
}

void AMaiDebugger::aiDebugPrint2(AActor* Actor, const FString& InString, const FMaiDebugPrintParams& Params) {
}

void AMaiDebugger::aiDebugPrint(AActor* Actor, const FString& InString, bool toScreen, bool toLog, FLinearColor Color, float Duration, bool IgnoreActor, const FString& Category) {
}

void AMaiDebugger::AIDebugPrevActor() {
}

void AMaiDebugger::AIDebugPerception(bool Debug) {
}

void AMaiDebugger::AIDebugOdor(bool Debug) {
}

void AMaiDebugger::AIDebugNoises(bool Debug) {
}

void AMaiDebugger::AIDebugNextActor() {
}

void AMaiDebugger::AIDebugNavPath(bool Debug) {
}

void AMaiDebugger::AIDebugNavMesh(bool Debug) {
}

void AMaiDebugger::AIDebugMovement(bool Debug) {
}

void AMaiDebugger::AIDebugHUD() {
}

void AMaiDebugger::AIDebugHearing(bool Debug) {
}

void AMaiDebugger::AIDebugger(bool Activate) {
}

void AMaiDebugger::AIDebugEQSSwitch() {
}

void AMaiDebugger::AIDebugEQSDetails() {
}

void AMaiDebugger::AIDebugEQS(bool Debug) {
}

void AMaiDebugger::AIDebugCuriosity(bool Debug) {
}

void AMaiDebugger::AIDebugBehaviorTree(bool Debug) {
}

void AMaiDebugger::AIDebugAttack(bool Debug) {
}

void AMaiDebugger::AIDebugAInfo(bool Debug) {
}

void AMaiDebugger::AIDebugAggro(bool Debug) {
}

void AMaiDebugger::AIDebugAddState(FName Name, bool Debug) {
}

void AMaiDebugger::AIDebugActor(FName Name) {
}

void AMaiDebugger::AIDebugActionPath(bool Debug) {
}


