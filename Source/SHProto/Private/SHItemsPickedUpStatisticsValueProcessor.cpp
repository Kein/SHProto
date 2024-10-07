#include "SHItemsPickedUpStatisticsValueProcessor.h"

USHItemsPickedUpStatisticsValueProcessor::USHItemsPickedUpStatisticsValueProcessor() {
    this->ConsumableItemsPickedUp = 0;
}

void USHItemsPickedUpStatisticsValueProcessor::ProcessLevelItemGrabbedOrInvestigated(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}

void USHItemsPickedUpStatisticsValueProcessor::ProcessItemCollected(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}


