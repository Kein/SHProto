#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPointHandle.generated.h"

USTRUCT(BlueprintType)
struct SIMPLESPAWNPOINTS_API FSpawnPointHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    FSpawnPointHandle();
};

