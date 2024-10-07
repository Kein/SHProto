#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationRootMotion.h"
#include "StampPath.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FStampPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor _Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimationRootMotion _RootMotion;
    
    FStampPath();
};

