#pragma once
#include "CoreMinimal.h"
#include "AkLateReverbComponent.h"
#include "BlooberAkLateReverbComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLOOBERWWISE_API UBlooberAkLateReverbComponent : public UAkLateReverbComponent {
    GENERATED_BODY()
public:
    UBlooberAkLateReverbComponent(const FObjectInitializer& ObjectInitializer);

};

