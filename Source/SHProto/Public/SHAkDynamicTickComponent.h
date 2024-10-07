#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkDynamicTickComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkDynamicTickComponent : public USHAkComponent {
    GENERATED_BODY()
public:
    USHAkDynamicTickComponent(const FObjectInitializer& ObjectInitializer);

};

