#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "SpotLightWithShadowDistanceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USpotLightWithShadowDistanceComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShadowMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float ShadowMaxDistanceFadeRange;
    
    USpotLightWithShadowDistanceComponent(const FObjectInitializer& ObjectInitializer);

};

