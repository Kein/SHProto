#pragma once
#include "CoreMinimal.h"
#include "SHBossBaseFXComponent.h"
#include "SHMaryBossFXComponent.generated.h"

class USHFXWaterInteractionSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMaryBossFXComponent : public USHBossBaseFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXWaterInteractionSubcompSettings* WaterInteractionSettings;
    
public:
    USHMaryBossFXComponent(const FObjectInitializer& ObjectInitializer);

};

