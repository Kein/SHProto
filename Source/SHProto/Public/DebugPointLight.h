#pragma once
#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "DebugPointLight.generated.h"

UCLASS()
class SHPROTO_API ADebugPointLight : public APointLight {
    GENERATED_UCLASS_BODY()
public:
    // ADebugPointLight(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override {};
#endif

	virtual void PostLoad() override {};
#if WITH_EDITOR
	virtual void LoadedFromAnotherClass(const FName& OldClassName) override {};
#endif

};

