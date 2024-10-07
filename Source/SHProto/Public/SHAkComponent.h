#pragma once
#include "CoreMinimal.h"
#include "BlooberAkComponent.h"
#include "SHAkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkComponent : public UBlooberAkComponent {
    GENERATED_BODY()
public:
    USHAkComponent(const FObjectInitializer& ObjectInitializer);

};

