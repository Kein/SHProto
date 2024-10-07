#pragma once
#include "CoreMinimal.h"
#include "SHAkPortalComponent.h"
#include "SHAkPortalOpenableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkPortalOpenableComponent : public USHAkPortalComponent {
    GENERATED_BODY()
public:
    USHAkPortalOpenableComponent(const FObjectInitializer& ObjectInitializer);

};

