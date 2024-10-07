#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "AmbientSpotLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UAmbientSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UAmbientSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

