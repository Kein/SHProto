#include "SHMQSpiderAnimInstance.h"
#include "SHMQSpiderAnimInstanceStateData.h"

USHMQSpiderAnimInstance::USHMQSpiderAnimInstance() {
    this->AnimInstanceStateDataClass = USHMQSpiderAnimInstanceStateData::StaticClass();
}



USHMQSpiderAnimInstanceStateData* USHMQSpiderAnimInstance::GetMQSpiderAnimInstanceStateData() const {
    return NULL;
}


