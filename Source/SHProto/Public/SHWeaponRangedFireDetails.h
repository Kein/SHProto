#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SHWeaponRangedFireDetails.generated.h"

USTRUCT(BlueprintType)
struct FSHWeaponRangedFireDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TracesNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHitResult> FoundHits;
    
    SHPROTO_API FSHWeaponRangedFireDetails();
};

