#pragma once
#include "CoreMinimal.h"
#include "ChromaSDKColors.h"
#include "ChromaSDKColorFrame2D.generated.h"

USTRUCT()
struct CHROMASDKPLUGIN_API FChromaSDKColorFrame2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FChromaSDKColors> Colors;
    
    FChromaSDKColorFrame2D();
};

