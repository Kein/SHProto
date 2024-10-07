#pragma once
#include "CoreMinimal.h"
#include "SHWeaponFXComponent.h"
#include "SHMeleeWeaponFXComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMeleeWeaponFXComponent : public USHWeaponFXComponent {
    GENERATED_BODY()
public:
    USHMeleeWeaponFXComponent(const FObjectInitializer& ObjectInitializer);

};

