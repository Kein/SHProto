#pragma once
#include "CoreMinimal.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapSavePointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayMapSavePointComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
    USHGameplayMapSavePointComponent(const FObjectInitializer& ObjectInitializer);

};

