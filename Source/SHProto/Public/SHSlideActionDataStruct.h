#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHSlideDataStruct.h"
#include "SHSlideActionDataStruct.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHSlideActionDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData AnimationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHSlideDataStruct SlideData;
    
    FSHSlideActionDataStruct();
};

