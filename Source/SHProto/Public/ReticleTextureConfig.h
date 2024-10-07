#pragma once
#include "CoreMinimal.h"
#include "ReticleTextureConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReticleTextureConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Thin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ThinAtlasSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Normal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NormalAtlasSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Thick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ThickAtlasSize;
    
    SHPROTO_API FReticleTextureConfig();
};

