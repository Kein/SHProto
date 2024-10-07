#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHMovementProfile.h"
#include "ESHMovementSprintCameraFOVProfile.h"
#include "SHCameraFOVBlendData.h"
#include "SHMovementDataStruct.h"
#include "SHCharacterPlayMovementSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHCharacterPlayMovementSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHMovementProfile, FSHMovementDataStruct> MovementProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESHMovementSprintCameraFOVProfile, FSHCameraFOVBlendData> FOVProfiles;
    
    USHCharacterPlayMovementSettings();

};

