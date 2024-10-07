#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPlayerSkin.h"
#include "SHDLCSkinSettingsDataAsset.generated.h"

class UStaticMesh;

UCLASS(BlueprintType)
class SHPROTO_API USHDLCSkinSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPlayerSkin, TSoftObjectPtr<UStaticMesh>> SkinToStaticMeshAssetMap;
    
    USHDLCSkinSettingsDataAsset();

};

