#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHExtraHitAudioData.h"
#include "Templates/SubclassOf.h"
#include "SHExtraHitAudioDataMappings.generated.h"

class UDamageType;

UCLASS(BlueprintType)
class SHPROTO_API USHExtraHitAudioDataMappings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<UDamageType>, FSHExtraHitAudioData> Mappings;
    
    USHExtraHitAudioDataMappings();

};

