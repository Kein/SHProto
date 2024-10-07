#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKSceneEffect.h"
#include "ChromaSDKScene.generated.h"

USTRUCT(BlueprintType)
struct CHROMASDKPLUGIN_API FChromaSDKScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FChromaSDKSceneEffect> Effects;
    
    FChromaSDKScene();
};

