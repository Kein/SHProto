#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationBoneTransform.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct BEING_API FAnimationBoneTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UAnimSequence* _Anim;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform _Initial;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform _Final;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform _Movement;
    
    FAnimationBoneTransform();
};

