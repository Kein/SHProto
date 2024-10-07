#include "CheckGameplayTags.h"

UCheckGameplayTags::UCheckGameplayTags() {
    this->_Fixed = false;
    this->_TagsToMatch = EGameplayContainerMatchType::Any;
    this->_CheckComponents = false;
}


