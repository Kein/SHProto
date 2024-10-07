#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHEnemyBaseFXComponent.generated.h"

class USHFXBleedingSubcompSettings;
class USHFXBloodPuddleSubcompSettings;
class USHFXPenetrateSplashSubcompSettings;
class USHFXRaingWettingSubcompSettings;
class USHFXSplashPuddleSubcompSettings;
class USHFXVisualHPSubcompSettings;
class USHFXWaterInteractionSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEnemyBaseFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXBloodPuddleSubcompSettings* BloodPuddleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXPenetrateSplashSubcompSettings* PenetrateSplashSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXSplashPuddleSubcompSettings* SplashPuddleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXBleedingSubcompSettings* BleedingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXVisualHPSubcompSettings* VisualHPSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXWaterInteractionSubcompSettings* WaterInteractionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXRaingWettingSubcompSettings* RainWettingSettings;
    
public:
    USHEnemyBaseFXComponent(const FObjectInitializer& ObjectInitializer);

};

