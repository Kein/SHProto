#pragma once
#include "CoreMinimal.h"
#include "BlooberAkPortalComponent.h"
#include "SHAkPortalComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkPortalComponent : public UBlooberAkPortalComponent {
    GENERATED_BODY()
public:
    USHAkPortalComponent(const FObjectInitializer& ObjectInitializer);

};

