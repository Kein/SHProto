#pragma once
#include "CoreMinimal.h"
#include "Components/RectLightComponent.h"
#include "RectLightWithShadowDistanceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API URectLightWithShadowDistanceComponent : public URectLightComponent {
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShadowMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float ShadowMaxDistanceFadeRange;
    
    // URectLightWithShadowDistanceComponent(const FObjectInitializer& ObjectInitializer);
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif

};

