#pragma once
#include "CoreMinimal.h"
#include "SHWeaponRangedPointingData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSHWeaponRangedPointingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsPointedActorForbiddingToBeShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> PointedActor;
    
    SHPROTO_API FSHWeaponRangedPointingData();
};

