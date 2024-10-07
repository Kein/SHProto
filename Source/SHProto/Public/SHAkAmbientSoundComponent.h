#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkAmbientSoundComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkAmbientSoundComponent : public USHAkComponent {
    GENERATED_BODY()
public:
    USHAkAmbientSoundComponent(const FObjectInitializer& ObjectInitializer);

};

