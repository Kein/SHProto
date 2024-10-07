#pragma once
#include "CoreMinimal.h"
#include "SHEnemyAnimComponent.h"
#include "SHPHAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPHAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHPHAnimComponent(const FObjectInitializer& ObjectInitializer);

};

