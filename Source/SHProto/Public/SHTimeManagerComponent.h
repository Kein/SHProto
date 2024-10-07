#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHTimeManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHTimeManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USHTimeManagerComponent(const FObjectInitializer& ObjectInitializer);

};

