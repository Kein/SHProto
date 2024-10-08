#pragma once
#include "CoreMinimal.h"
#include "Engine/RectLight.h"
#include "AmbientRectLight.generated.h"

UCLASS(MinimalAPI)
class AAmbientRectLight : public ARectLight {
	GENERATED_UCLASS_BODY()
public:
    //AAmbientRectLight(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override {};
#endif

	virtual void PostLoad() override {};

#if WITH_EDITOR
	virtual void LoadedFromAnotherClass(const FName& OldClassName) override {};
#endif

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override {};
#endif

};

