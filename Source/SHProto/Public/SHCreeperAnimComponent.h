#pragma once
#include "CoreMinimal.h"
#include "SHEnemyAnimComponent.h"
#include "SHCreeperAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCreeperAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHCreeperAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttackBlend(float Velocity);
    
};

