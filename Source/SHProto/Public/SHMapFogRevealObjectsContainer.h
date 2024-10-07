#pragma once
#include "CoreMinimal.h"
#include "SHMapFogRevealObjectData.h"
#include "SHMapFogRevealObjectsContainer.generated.h"

USTRUCT(BlueprintType)
struct FSHMapFogRevealObjectsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FSHMapFogRevealObjectData> Objects;
    
    SHPROTO_API FSHMapFogRevealObjectsContainer();
};

