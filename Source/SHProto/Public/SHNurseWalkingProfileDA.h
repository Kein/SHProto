#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ENurseWalkingProfile.h"
#include "NurseWalkingProfileData.h"
#include "SHNurseWalkingProfileDA.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHNurseWalkingProfileDA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ENurseWalkingProfile, FNurseWalkingProfileData> Profiles;
    
    USHNurseWalkingProfileDA();

};

