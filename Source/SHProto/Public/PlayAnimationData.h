#pragma once
#include "CoreMinimal.h"
#include "SHAnimBlendProfile.h"
#include "PlayAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SHPROTO_API FPlayAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UAnimationAsset> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHAnimBlendProfile BlendInProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHAnimBlendProfile BlendOutProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool UseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float RootMotionTranslationScale;
    
    FPlayAnimationData();
};

