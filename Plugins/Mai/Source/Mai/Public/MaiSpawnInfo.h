#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MaiSpawnInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct MAI_API FMaiSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<APawn> _PawnClass;
    
    UPROPERTY(EditAnywhere)
    uint8 _Weight;
    
    FMaiSpawnInfo();
};

