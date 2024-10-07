#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimationBoneTransform.h"
#include "TaggedAnimationTransform.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct BEING_API FTaggedAnimationTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequence*> _Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAnimationBoneTransform> _BoneTransforms;
    
    FTaggedAnimationTransform();
};

