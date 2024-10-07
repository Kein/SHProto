#include "InputEventState.h"

UInputEventState::UInputEventState() {
}

bool UInputEventState::IsConsumed() const {
    return false;
}

UObject* UInputEventState::GetConsumer() const {
    return NULL;
}

bool UInputEventState::Consume(UObject* NewConsumer) {
    return false;
}


