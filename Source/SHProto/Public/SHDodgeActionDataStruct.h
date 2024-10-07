#pragma once
#include "CoreMinimal.h"
#include "SHCameraDataFull.h"
#include "SHSlideActionDataStruct.h"
#include "SHDodgeActionDataStruct.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHDodgeActionDataStruct : public FSHSlideActionDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DodgeCooldownValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRotateCharacterToView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBoostCameraInterpLagSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDodgeOverrrideCameraProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraDataFull DodgeCameraProfileOverrride;
    
    FSHDodgeActionDataStruct();
};

