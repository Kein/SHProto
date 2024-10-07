#pragma once
#include "CoreMinimal.h"
#include "MaiAction_SyncAnimations.h"
#include "SHBlendData.h"
#include "SHCameraDataStruct.h"
#include "SHViewLookOperationSettings.h"
#include "SHAIAction_Sync.generated.h"

UCLASS(EditInlineNew)
class USHAIAction_Sync : public UMaiAction_SyncAnimations {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _HideWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _HardLockTokens;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _ReleaseOtherOnFinish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _ChangeCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHViewLookOperationSettings _CameraChangeSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _CustomCameraName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraDataStruct _CustomCameraData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraDataStruct _CustomCollisionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _RotationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _LookOperationZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _LookOperationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _BlendCameraFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendCameraFOVValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHBlendData _BlendCameraFOVConfig;
    
public:
    USHAIAction_Sync();

    UFUNCTION(BlueprintCallable)
    void StopCameraChange();
    
};

