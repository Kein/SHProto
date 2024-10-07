#pragma once
#include "CoreMinimal.h"
#include "MaiLightData.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiLightData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _LastTestTime;
    
    FMaiLightData();
};

