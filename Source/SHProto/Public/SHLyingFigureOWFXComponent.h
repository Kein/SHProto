#pragma once
#include "CoreMinimal.h"
#include "SHLyingFigureFXComponent.h"
#include "SHLyingFigureOWFXComponent.generated.h"

class USHFXPukeExplosionSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHLyingFigureOWFXComponent : public USHLyingFigureFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXPukeExplosionSubcompSettings* DeathPukeExplosionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXPukeExplosionSubcompSettings* AtackPukeExplosionSettings;
    
public:
    USHLyingFigureOWFXComponent(const FObjectInitializer& ObjectInitializer);

};

