#include "SHEnemyHitReactionSelectionStatics.h"

USHEnemyHitReactionSelectionStatics::USHEnemyHitReactionSelectionStatics() {
}

FSHEnemyHitReactionSelectionAllowedStates USHEnemyHitReactionSelectionStatics::MergeAllowedHitReactions(FSHEnemyHitReactionSelectionAllowedStates& MergeInto, const FSHEnemyHitReactionSelectionAllowedStates& MergeFrom) {
    return FSHEnemyHitReactionSelectionAllowedStates{};
}

FSHEnemyHitReactionSelectionAllowedStates USHEnemyHitReactionSelectionStatics::MakeAllowedHitReactionsSimple(bool AllowKnockdown, bool AllowFalter, bool AllowStagger, bool AllowNormal) {
    return FSHEnemyHitReactionSelectionAllowedStates{};
}

FSHEnemyHitReactionSelectionAllowedStates USHEnemyHitReactionSelectionStatics::MakeAllowedHitReactionsNone() {
    return FSHEnemyHitReactionSelectionAllowedStates{};
}

FSHEnemyHitReactionSelectionAllowedStates USHEnemyHitReactionSelectionStatics::MakeAllowedHitReactionsAll() {
    return FSHEnemyHitReactionSelectionAllowedStates{};
}


