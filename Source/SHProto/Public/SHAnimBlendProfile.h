#pragma once
#include "CoreMinimal.h"
#include "SHAnimBlendProfile.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimBlendProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSoftObjectPtr<UBlendProfile> BlendProfile;
    
public:
    FSHAnimBlendProfile();
};

