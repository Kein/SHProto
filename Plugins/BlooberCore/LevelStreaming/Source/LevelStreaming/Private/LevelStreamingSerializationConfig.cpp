#include "LevelStreamingSerializationConfig.h"

ULevelStreamingSerializationConfig::ULevelStreamingSerializationConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestoreActorTransform = true;
    this->RestoreActorVisibility = true;
    this->SerializeComponentsOnlyWithSaveGame = true;
    this->RestoreComponentsVisibility = true;
    this->RestoreComponentsTransform = true;
    this->SkipTransformRestoreForDetachedComponents = true;
    this->RestoreActorAttachment = false;
}


