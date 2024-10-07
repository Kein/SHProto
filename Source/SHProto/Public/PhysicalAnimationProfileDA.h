#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPhysicalAnimationProfile.h"
#include "PhysicalAnimationProfileData.h"
#include "PhysicalAnimationProfileDA.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API UPhysicalAnimationProfileDA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPhysicalAnimationProfile, FPhysicalAnimationProfileData> Profiles;
    
    UPhysicalAnimationProfileDA();

};

