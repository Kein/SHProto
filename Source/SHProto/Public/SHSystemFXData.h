#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SHSystemFXData.generated.h"

class UAkSwitchValue;
class UMaterialInterface;
class UNiagaraSystem;

UCLASS(BlueprintType)
class SHPROTO_API USHSystemFXData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> ImpactFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactFXLifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCustomDecalData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomDecalSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> DecalAtlasFrames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> ImpactDecal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ImpactDecalSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactDecalExtraRandomSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> ImpactSoundSwitch;
    
    USHSystemFXData();

};

