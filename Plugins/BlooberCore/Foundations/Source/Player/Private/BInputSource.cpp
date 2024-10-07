#include "BInputSource.h"
#include "InputEventState.h"

UBInputSource::UBInputSource() {
    this->InputEventState = CreateDefaultSubobject<UInputEventState>(TEXT("InputEventState"));
}


