#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SHCameraDataStruct.h"
#include "SHVehicleSpotCameraDataSet.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHVehicleSpotCameraDataSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCustomViewComponentRelLoc;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CustomViewComponentRelLoc;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseLimitPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D PitchLimitToSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseLimitYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D YawLimitToSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCustomCameraData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHCameraDataStruct CustomCameraData;
    
    USHVehicleSpotCameraDataSet();

};

