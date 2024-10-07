#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKDeviceFrameIndex.h"
#include "EChromaSDKSceneBlend.h"
#include "EChromaSDKSceneMode.h"
#include "ChromaSDKSceneEffect.generated.h"

USTRUCT(BlueprintType)
struct CHROMASDKPLUGIN_API FChromaSDKSceneEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EChromaSDKSceneBlend::Type> Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EChromaSDKSceneMode::Type> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FChromaSDKDeviceFrameIndex FrameIndex;
    
    FChromaSDKSceneEffect();
};

