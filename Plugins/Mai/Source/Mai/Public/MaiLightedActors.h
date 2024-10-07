#pragma once
#include "CoreMinimal.h"
#include "MaiLightedActors.generated.h"

class UMaiLightEmitter;

USTRUCT(BlueprintType)
struct MAI_API FMaiLightedActors {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _LastTestTime;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<UMaiLightEmitter>> _LightingLights;
    
    FMaiLightedActors();
};

