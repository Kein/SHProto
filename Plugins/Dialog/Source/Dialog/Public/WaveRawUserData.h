#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "WaveRawUserData.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UWaveRawUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> _BulkData;
    
    UPROPERTY(VisibleAnywhere)
    float _Duration;
    
    UWaveRawUserData();

};

