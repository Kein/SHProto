#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SHInWaterVolume.generated.h"

UCLASS()
class ASHInWaterVolume : public AVolume {
    GENERATED_BODY()
public:
    ASHInWaterVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool IsPointWithin(FVector Point) const;
    
};

