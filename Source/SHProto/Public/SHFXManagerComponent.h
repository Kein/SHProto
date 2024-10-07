#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHFXManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFXManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USHFXManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Exec)
    void SHDebug_FX_ValuesDebug();
    
};

