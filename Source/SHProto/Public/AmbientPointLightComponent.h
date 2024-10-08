#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "AmbientPointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UAmbientPointLightComponent : public UPointLightComponent {
    GENERATED_UCLASS_BODY()
public:
    //UAmbientPointLightComponent(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif
};

