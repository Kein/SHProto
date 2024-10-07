#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WholeBodyTranslation.generated.h"

USTRUCT(BlueprintType)
struct FWholeBodyTranslation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector VectorUp;
    
    SHPROTO_API FWholeBodyTranslation();
};

