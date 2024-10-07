#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BeingFootstepManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingFootstepManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBeingFootstepManagerComponent(const FObjectInitializer& ObjectInitializer);

};

