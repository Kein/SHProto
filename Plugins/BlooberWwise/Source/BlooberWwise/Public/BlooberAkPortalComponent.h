#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "BlooberAkPortalComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLOOBERWWISE_API UBlooberAkPortalComponent : public UAkPortalComponent {
    GENERATED_BODY()
public:
    UBlooberAkPortalComponent(const FObjectInitializer& ObjectInitializer);

};

