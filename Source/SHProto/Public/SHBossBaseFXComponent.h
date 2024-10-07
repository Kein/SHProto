#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHBossBaseFXComponent.generated.h"

class USHFXBleedingSubcompSettings;
class USHFXPenetrateSplashSubcompSettings;
class USHFXSplashPuddleSubcompSettings;
class USHFXVisualHPSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBossBaseFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXPenetrateSplashSubcompSettings* PenetrateSplashSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXSplashPuddleSubcompSettings* SplashPuddleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXBleedingSubcompSettings* BleedingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXVisualHPSubcompSettings* VisualHPSettings;
    
public:
    USHBossBaseFXComponent(const FObjectInitializer& ObjectInitializer);

};

