#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "NavModifierVolume.h"
#include "SHBlockingVolume.generated.h"

UCLASS()
class SHPROTO_API ASHBlockingVolume : public ANavModifierVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideWalkableSlopeOnInstance: 1;
    
    UPROPERTY(EditAnywhere)
    FWalkableSlopeOverride WalkableSlopeOverride;
    
public:
    ASHBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

