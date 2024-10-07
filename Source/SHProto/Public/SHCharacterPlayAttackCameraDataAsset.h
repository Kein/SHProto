#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHCameraAnimationData.h"
#include "SHCameraDataFull.h"
#include "SHCameraFOVBlendData.h"
#include "SHCameraMAACRBlendData.h"
#include "SHCameraMAARLBlendData.h"
#include "SHViewLookOperationSettings.h"
#include "SHCharacterPlayAttackCameraDataAsset.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHCharacterPlayAttackCameraDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSecureCameraView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SecureViewDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHViewLookOperationSettings SecureViewSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrrideCameraFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraFOVBlendData CameraFOVOverrride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraMAARLBlendData CameraMAARL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraMAACRBlendData CameraMAACR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrrideCameraProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraDataFull CameraProfileOverrride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCameraAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraAnimationData CameraAnimationData;
    
    USHCharacterPlayAttackCameraDataAsset();

};

