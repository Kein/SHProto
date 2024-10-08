#pragma once
#include "CoreMinimal.h"
#include "Engine/RectLight.h"
#include "RectLightWithShadowDistance.generated.h"

UCLASS(MinimalAPI)
class ARectLightWithShadowDistance : public ARectLight {
    GENERATED_UCLASS_BODY()
public:
    // ARectLightWithShadowDistance(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override {};
#endif

	virtual void PostLoad() override {};
#if WITH_EDITOR
	virtual void LoadedFromAnotherClass(const FName& OldClassName) override {};
#endif

};

