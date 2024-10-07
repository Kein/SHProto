#include "SHLyingFigureAnimInstance.h"
#include "SHLyingFigureAnimInstanceStateData.h"

USHLyingFigureAnimInstance::USHLyingFigureAnimInstance() {
    this->AnimInstanceStateDataClass = USHLyingFigureAnimInstanceStateData::StaticClass();
    this->bIsCrawling = false;
}

USHLyingFigureStandingLocomotionAnimInstance* USHLyingFigureAnimInstance::GetLyingFigureStandingLocomotionAnimInstance() const {
    return NULL;
}

USHLyingFigureCrawlingLocomotionAnimInstance* USHLyingFigureAnimInstance::GetLyingFigureCrawlingLocomotionAnimInstance() const {
    return NULL;
}

USHLyingFigureAnimInstanceStateData* USHLyingFigureAnimInstance::GetLyingFigureAnimInstanceStateData() const {
    return NULL;
}

USHLyingFigureLocomotionAnimInstance* USHLyingFigureAnimInstance::GetActiveLyingFigureLocomotionAnimInstance() const {
    return NULL;
}


