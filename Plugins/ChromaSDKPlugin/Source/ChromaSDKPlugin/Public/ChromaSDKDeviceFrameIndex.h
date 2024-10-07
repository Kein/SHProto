#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKDeviceFrameIndex.generated.h"

USTRUCT(Blueprintable)
struct CHROMASDKPLUGIN_API FChromaSDKDeviceFrameIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> FrameIndex;
    
    FChromaSDKDeviceFrameIndex();
};

