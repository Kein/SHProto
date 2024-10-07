#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "SHBlendData.h"
#include "SHCameraPostProcessConfig.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHCameraPostProcessConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendConfigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    USHCameraPostProcessConfig();

};

