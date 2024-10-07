#include "SHItemsInvestigationStatisticsValueProcessor.h"

USHItemsInvestigationStatisticsValueProcessor::USHItemsInvestigationStatisticsValueProcessor() {
    this->MapItemsInvestigated = 0;
    this->bHasEverEnabledRadio = false;
    this->bIsWatchingEverEnabledRadio = false;
}

void USHItemsInvestigationStatisticsValueProcessor::ProcessEquipmentItemSpawned(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}

void USHItemsInvestigationStatisticsValueProcessor::ProcessCollectedOrLevelItemInvestigated(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}


