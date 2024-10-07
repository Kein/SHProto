#include "MaiMessage.h"
#include "Templates/SubclassOf.h"

UMaiMessage::UMaiMessage() {
    this->_Sender = NULL;
}

void UMaiMessage::Send(const FMaiReceiverFilter& Filter, float spreadingSpeed) {
}


void UMaiMessage::MarkReceived() {
}

void UMaiMessage::MarkCaptured() {
}

UMaiMessage* UMaiMessage::makeMessage(UObject* WorldContextObject, TSubclassOf<UMaiMessage> msgClass, AActor* sender) {
    return NULL;
}

bool UMaiMessage::IsReceived() const {
    return false;
}

bool UMaiMessage::IsCaptured() const {
    return false;
}

void UMaiMessage::Deliver(APawn* Receiver) {
}

void UMaiMessage::Broadcast(FMaiReceiverFilter Filter, float spreadingSpeed) {
}


