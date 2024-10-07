#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "Templates/SubclassOf.h"
#include "AtmosphereCtrlWorldSettings.generated.h"

class APostprocessingCtrlActor;

UCLASS()
class POSTPROCESSVOLUMEEX_API AAtmosphereCtrlWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APostprocessingCtrlActor> PostprocessingCtrlClass;
    
    AAtmosphereCtrlWorldSettings(const FObjectInitializer& ObjectInitializer);

};

