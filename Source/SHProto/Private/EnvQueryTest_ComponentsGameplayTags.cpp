#include "EnvQueryTest_ComponentsGameplayTags.h"

UEnvQueryTest_ComponentsGameplayTags::UEnvQueryTest_ComponentsGameplayTags() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bRejectIncompatibleItems = false;
    this->bUpdatedToUseQuery = false;
    this->TagsToMatch = EGameplayContainerMatchType::Any;
}


