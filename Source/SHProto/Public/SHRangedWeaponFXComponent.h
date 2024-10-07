#pragma once
#include "CoreMinimal.h"
#include "SHWeaponFXComponent.h"
#include "SHRangedWeaponFXComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHRangedWeaponFXComponent : public USHWeaponFXComponent {
    GENERATED_BODY()
public:
    USHRangedWeaponFXComponent(const FObjectInitializer& ObjectInitializer);

};

