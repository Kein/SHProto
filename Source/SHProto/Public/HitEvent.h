#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "HitEvent.generated.h"

USTRUCT(BlueprintType)
struct FHitEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CharacterVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CharacterLocation;
    
    SHPROTO_API FHitEvent();
};

