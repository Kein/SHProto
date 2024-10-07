#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChromaSDKColors.generated.h"

USTRUCT()
struct CHROMASDKPLUGIN_API FChromaSDKColors {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLinearColor> Colors;
    
    FChromaSDKColors();
};

