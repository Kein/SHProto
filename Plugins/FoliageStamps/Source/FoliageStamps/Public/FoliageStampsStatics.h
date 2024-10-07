#pragma once
#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "FoliageStampsStatics.generated.h"

class ALandscapeProxy;
class UFoliageType;

UCLASS()
class FOLIAGESTAMPS_API UFoliageStampsStatics : public UGameplayStatics {
    GENERATED_BODY()
public:
    UFoliageStampsStatics();

    UFUNCTION(BlueprintCallable)
    static void UpdateStampsDefinitions();
    
    UFUNCTION(BlueprintCallable)
    static void PaintFoliageOnLayer(ALandscapeProxy* Landscape, UFoliageType* Foliage, int32 Layer, float Density, float WeightTreshold);
    
};

