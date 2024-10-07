#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHBossfightItemsManagerPhaseSetup.h"
#include "SHBossfightItemsManagerConfigDataAsset.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHBossfightItemsManagerConfigDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FSHBossfightItemsManagerPhaseSetup> PhaseToSetupMap;
    
    USHBossfightItemsManagerConfigDataAsset();

};

