#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChromaSDKColorFrame1D.generated.h"

USTRUCT()
struct CHROMASDKPLUGIN_API FChromaSDKColorFrame1D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLinearColor> Colors;
    
    FChromaSDKColorFrame1D();
};

