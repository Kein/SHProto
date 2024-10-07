#pragma once
#include "CoreMinimal.h"
#include "MaiThe6thSenseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAI_API FMaiThe6thSenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* _Instigator;
    
    FMaiThe6thSenseEvent();
};

