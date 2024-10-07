#include "BTTask_MBP3WallRun.h"

UBTTask_MBP3WallRun::UBTTask_MBP3WallRun() {
    this->NodeName = TEXT("Maria Boss Perform Wall Run");
    this->StartingWallIndex = 0;
    this->MaxSequences = 1;
    this->bPickRandomIndex = false;
    this->bPlayAllSequences = false;
    this->EndWaitTime = 0.00f;
    this->RandomDeviation = 0.00f;
}


