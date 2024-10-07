#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKGuid.h"
#include "ChromaSDKEffectResult.generated.h"

USTRUCT(BlueprintType)
struct CHROMASDKPLUGIN_API FChromaSDKEffectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Result;
    
    UPROPERTY(BlueprintReadOnly)
    FChromaSDKGuid EffectId;
    
    FChromaSDKEffectResult();
};

