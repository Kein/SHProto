#include "SHCustomSaveStatics.h"

USHCustomSaveStatics::USHCustomSaveStatics() {
}

void USHCustomSaveStatics::RegisterSeenEnding(const UObject* WorldContextObject, ESHEndingType InEndingType) {
}

bool USHCustomSaveStatics::IsNewGamePlus(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasSeenStillnessEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasSeenRebirthEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasSeenMariaEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasSeenInWaterEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasSeenBlissEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasEverSeenLeaveEnding(const UObject* WorldContextObject) {
    return false;
}

bool USHCustomSaveStatics::HasEverFinishedGame(const UObject* WorldContextObject) {
    return false;
}

int32 USHCustomSaveStatics::GetDeathCount(const UObject* WorldContextObject) {
    return 0;
}

void USHCustomSaveStatics::FetchActorSavedPropertyBoolValue(const UObject* WorldContextObject, const FGuid& InActorGuid, FName InPropertyName, bool& OutFetchSuccess, bool& OutFoundValue) {
}

int32 USHCustomSaveStatics::CountUniqueSeenEndings(const UObject* WorldContextObject) {
    return 0;
}


