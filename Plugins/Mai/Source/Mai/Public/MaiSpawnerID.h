#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiSpawnerID.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiSpawnerID {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FGuid _Uid;
    
    FMaiSpawnerID();
};

