#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayAnimationData.h"
#include "SHSlideActionDataStruct.h"
#include "Templates/SubclassOf.h"
#include "SHHitReactionMaps.generated.h"

class UDamageType;

UCLASS(BlueprintType)
class SHPROTO_API USHHitReactionMaps : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FPlayAnimationData> SoftDamageHitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FPlayAnimationData> ContinuousDamageHitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FPlayAnimationData> StunDamageHitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FSHSlideActionDataStruct> HitReactions;
    
    USHHitReactionMaps();

};

