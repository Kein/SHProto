#pragma once
#include "CoreMinimal.h"
#include "SHEnemyAnimComponent.h"
#include "SHMQSpiderAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMQSpiderAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHMQSpiderAnimComponent(const FObjectInitializer& ObjectInitializer);

};

