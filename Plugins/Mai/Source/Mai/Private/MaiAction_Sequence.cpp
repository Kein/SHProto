#include "MaiAction_Sequence.h"

UMaiAction_Sequence::UMaiAction_Sequence() {
    this->_ChildFailureHandlingMode = EBeingActionFailHandling::RequireSuccess;
    this->_Loop = 1;
}


