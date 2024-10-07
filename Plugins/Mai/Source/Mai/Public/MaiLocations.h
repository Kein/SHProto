#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiLocations.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiLocations {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> _Locations;
    
    FMaiLocations();
};

