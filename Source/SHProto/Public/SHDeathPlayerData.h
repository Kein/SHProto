#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SHCameraAnimationData.h"
#include "SHDeathPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FSHDeathPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag PawnAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag PlayerAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCameraAnimationData CameraAnimation;
    
    SHPROTO_API FSHDeathPlayerData();
};

