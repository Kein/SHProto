#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "AmbientSpotLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UAmbientSpotLightComponent : public USpotLightComponent {
	GENERATED_UCLASS_BODY()
public:
    //UAmbientSpotLightComponent(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif

};

