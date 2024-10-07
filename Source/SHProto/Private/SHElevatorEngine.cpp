#include "SHElevatorEngine.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "SHAkElevatorEngineComponent.h"

ASHElevatorEngine::ASHElevatorEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MovingComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MovingComponent"));
    this->InteriorAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteriorAreaComponent"));
    this->SafeAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SafeAreaComponent"));
    this->MainAkComponent = NULL;
    this->SHAkElevatorEngine = CreateDefaultSubobject<USHAkElevatorEngineComponent>(TEXT("SHAkElevatorEngine"));
    this->ElevatorSpeed = 0.50f;
    this->BeginPlayFloor = 0;
    this->bKeepDoorStayOpened = false;
    this->bResetOrdersOnDoorBlock = true;
    this->DoorStayOpenedTime = 3.00f;
    this->DoorsOpenCloseTime = 0.50f;
    this->CurrentFloor = 0;
    this->InteriorAreaComponent->SetupAttachment(MovingComponent);
    this->MovingComponent->SetupAttachment(RootComponent);
    this->SHAkElevatorEngine->SetupAttachment(MovingComponent);
    this->SafeAreaComponent->SetupAttachment(MovingComponent);
}

void ASHElevatorEngine::TryAbortActiveOrder() {
}

bool ASHElevatorEngine::TraceForBlockedDoor(float InDoorOpenOffset, float InTraceSphereRadius, const FVector InPivotWorldOffset) const {
    return false;
}

void ASHElevatorEngine::SetReceiveOrdersBlocked(const bool Blocked, const UObject* Object) {
}

void ASHElevatorEngine::SetCloseDoorsBlocked(const bool Blocked, const UObject* Object) {
}

bool ASHElevatorEngine::RequestDoorOpen(bool bInInstant) {
    return false;
}

bool ASHElevatorEngine::RequestDoorCustom(float CustomOpenessAlpha, bool bInInstant) {
    return false;
}

bool ASHElevatorEngine::RequestDoorClose(bool bInInstant) {
    return false;
}


bool ASHElevatorEngine::IsReceiveOrdersBlocked() const {
    return false;
}

bool ASHElevatorEngine::IsPawnInElevator(APawn* InCheckedPawn) const {
    return false;
}

bool ASHElevatorEngine::IsKeepingDoorStayOpened() const {
    return false;
}


bool ASHElevatorEngine::IsDoorOpened() const {
    return false;
}

bool ASHElevatorEngine::IsDoorClosed() const {
    return false;
}

bool ASHElevatorEngine::IsCloseDoorsBlocked() const {
    return false;
}

bool ASHElevatorEngine::HasActiveOrder() const {
    return false;
}

TArray<int32> ASHElevatorEngine::GetOrdersQueue() const {
    return TArray<int32>();
}


int32 ASHElevatorEngine::GetCurrentFloor() const {
    return 0;
}

int32 ASHElevatorEngine::GetCurrentDisplayFloor() const {
    return 0;
}


FSHElevatorOrderData ASHElevatorEngine::GetActiveOrder() const {
    return FSHElevatorOrderData{};
}

void ASHElevatorEngine::ClearOrders() {
}


void ASHElevatorEngine::AddOrder(const int32 FloorOrder) {
}


