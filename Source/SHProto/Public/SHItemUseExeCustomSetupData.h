#pragma once
#include "CoreMinimal.h"
#include "SHItemAttachSlotData.h"
#include "SHItemUseExeCustomSetupData.generated.h"

class UStreamableRenderAsset;

USTRUCT(BlueprintType)
struct FSHItemUseExeCustomSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStreamableRenderAsset> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHItemAttachSlotData AttachData;
    
    SHPROTO_API FSHItemUseExeCustomSetupData();
};

