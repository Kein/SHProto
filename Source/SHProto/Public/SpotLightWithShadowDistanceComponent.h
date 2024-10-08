#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "SpotLightWithShadowDistanceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USpotLightWithShadowDistanceComponent : public USpotLightComponent {
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShadowMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float ShadowMaxDistanceFadeRange;
    
    // USpotLightWithShadowDistanceComponent(const FObjectInitializer& ObjectInitializer);

	// ULightComponent interface.
//	virtual FSphere GetBoundingSphere() const override { return FSphere(); };
//	virtual bool AffectsBounds(const FBoxSphereBounds& InBounds) const override { return true; };
//	virtual ELightComponentType GetLightType() const override { return ELightComponentType::LightType_Directional; };
//	virtual FLightSceneProxy* CreateSceneProxy() const override { return NULL; };
//
//	virtual float ComputeLightBrightness() const override { return 1.0; };
//#if WITH_EDITOR
//	virtual void SetLightBrightness(float InBrightness) override {};
//	virtual FBox GetStreamingBounds() const override { return FBox(); };
//#endif

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif

};

