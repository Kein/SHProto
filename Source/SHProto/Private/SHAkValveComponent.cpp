#include "SHAkValveComponent.h"

USHAkValveComponent::USHAkValveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ValveStart_AudioEvent = NULL;
    this->ValveStop_AudioEvent = NULL;
    this->ValveFinalPush_AudioEvent = NULL;
}


