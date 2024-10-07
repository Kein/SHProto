#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHSystemFXDataMappings.generated.h"

class UPhysicalMaterial;
class USHSystemFXData;

UCLASS(BlueprintType)
class SHPROTO_API USHSystemFXDataMappings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPhysicalMaterial*, USHSystemFXData*> Mappings;
    
    USHSystemFXDataMappings();

};

