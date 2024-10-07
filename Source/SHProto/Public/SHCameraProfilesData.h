#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESHCameraProfile.h"
#include "SHCameraDataStruct.h"
#include "SHCameraProfilesData.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHCameraProfilesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHCameraProfile, FSHCameraDataStruct> Profiles;
    
    USHCameraProfilesData();

};

