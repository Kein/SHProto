#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiLevelLocation.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAI_API FMaiLevelLocation {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FVector _Location;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    TSoftObjectPtr<UObject> _Level;
    
    FMaiLevelLocation();
};

