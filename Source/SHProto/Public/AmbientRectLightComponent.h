#pragma once
#include "CoreMinimal.h"
#include "Components/RectLightComponent.h"
#include "AmbientRectLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UAmbientRectLightComponent : public URectLightComponent {
    GENERATED_BODY()
public:
    UAmbientRectLightComponent(const FObjectInitializer& ObjectInitializer);

};

