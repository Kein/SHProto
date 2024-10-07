#pragma once
#include "CoreMinimal.h"
#include "BlooberAkLateReverbComponent.h"
#include "SHAkLateReverbComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkLateReverbComponent : public UBlooberAkLateReverbComponent {
    GENERATED_BODY()
public:
    USHAkLateReverbComponent(const FObjectInitializer& ObjectInitializer);

};

