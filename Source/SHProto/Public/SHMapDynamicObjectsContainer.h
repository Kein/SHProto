#pragma once
#include "CoreMinimal.h"
#include "SHMapDynamicObjectDataStruct.h"
#include "SHMapDynamicObjectsContainer.generated.h"

USTRUCT(BlueprintType)
struct FSHMapDynamicObjectsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FSHMapDynamicObjectDataStruct> Objects;
    
    SHPROTO_API FSHMapDynamicObjectsContainer();
};

