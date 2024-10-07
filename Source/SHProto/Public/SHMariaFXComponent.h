#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHMariaFXComponent.generated.h"

class USHFXAcidLayerSubcompSettings;
class USHFXRaingWettingSubcompSettings;
class USHFXVisualHPSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMariaFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXVisualHPSubcompSettings* VisualHPSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXRaingWettingSubcompSettings* RainWettingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXAcidLayerSubcompSettings* AcidLayerSettings;
    
public:
    USHMariaFXComponent(const FObjectInitializer& ObjectInitializer);

};

