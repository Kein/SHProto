#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHItemWeaponExtensionComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHItemWeaponExtensionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USHItemWeaponExtensionComponent(const FObjectInitializer& ObjectInitializer);

};

