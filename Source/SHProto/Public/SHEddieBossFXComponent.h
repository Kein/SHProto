#pragma once
#include "CoreMinimal.h"
#include "SHBossBaseFXComponent.h"
#include "SHEddieBossFXComponent.generated.h"

class USHFXBloodPuddleSubcompSettings;
class USHFXFrozenBreathSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEddieBossFXComponent : public USHBossBaseFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXBloodPuddleSubcompSettings* BloodPuddleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXFrozenBreathSubcompSettings* FrozenBreathSettings;
    
public:
    USHEddieBossFXComponent(const FObjectInitializer& ObjectInitializer);

};

