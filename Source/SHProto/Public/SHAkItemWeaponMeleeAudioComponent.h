#pragma once
#include "CoreMinimal.h"
#include "SHAkItemWeaponBaseAudioComponent.h"
#include "SHAkItemWeaponMeleeAudioComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkItemWeaponMeleeAudioComponent : public USHAkItemWeaponBaseAudioComponent {
    GENERATED_BODY()
public:
    USHAkItemWeaponMeleeAudioComponent(const FObjectInitializer& ObjectInitializer);

};

