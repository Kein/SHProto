#pragma once
#include "CoreMinimal.h"
#include "SHAimedAtComponent.h"
#include "SHEnemyAimedAtCountingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHEnemyAimedAtCountingComponent : public USHAimedAtComponent {
    GENERATED_BODY()
public:
    USHEnemyAimedAtCountingComponent(const FObjectInitializer& ObjectInitializer);

};

