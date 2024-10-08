#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "PointLightWithShadowDistanceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UPointLightWithShadowDistanceComponent : public UPointLightComponent {
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShadowMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float ShadowMaxDistanceFadeRange;
    
    // UPointLightWithShadowDistanceComponent(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif

};

