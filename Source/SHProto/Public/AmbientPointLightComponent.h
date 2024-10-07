#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "AmbientPointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UAmbientPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UAmbientPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

