#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/InputScaleBias.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_RootMotionScale.generated.h"

USTRUCT(BlueprintType)
struct CHARACTERANIMATIONEXTRAS_API FAnimNode_RootMotionScale : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlphaBoolEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ALPHA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    FAnimNode_RootMotionScale();
};

