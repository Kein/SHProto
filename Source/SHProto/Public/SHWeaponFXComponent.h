#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHWeaponFXComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHWeaponFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USHWeaponFXComponent(const FObjectInitializer& ObjectInitializer);

};

