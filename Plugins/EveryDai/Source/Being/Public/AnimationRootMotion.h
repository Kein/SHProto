#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimationRootMotion.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FAnimationRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float _Length;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float _FramesPerSecond;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float _PlayRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector _Offset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FQuat> _Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FVector> _Translation;
    
    FAnimationRootMotion();
};

