#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHPyramidHeadBossFXComponent.generated.h"

class USHFXRaingWettingSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPyramidHeadBossFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXRaingWettingSubcompSettings* RainWettingSettings;
    
public:
    USHPyramidHeadBossFXComponent(const FObjectInitializer& ObjectInitializer);

};

