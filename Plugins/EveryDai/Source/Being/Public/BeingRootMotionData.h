#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AnimationRootMotion.h"
#include "BlendSpaceRootMotion.h"
#include "TaggedAnimationTransform.h"
#include "BeingRootMotionData.generated.h"

class UAnimSequence;
class UAnimationAsset;
class UBlendSpace;
class UDataTable;

UCLASS()
class BEING_API UBeingRootMotionData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 _MaxFramesPerSecond;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float _Precision;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(EditAnywhere)
    TArray<UDataTable*> _AnimTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimSequence*> _Animations;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UBlendSpace*> _Blendspaces;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<UAnimationAsset*, FAnimationRootMotion> _AnimRootMotion;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<UBlendSpace*, FBlendSpaceRootMotion> _BSRootMotion;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FTaggedAnimationTransform> _BonesTransform;
    
    UBeingRootMotionData();

    UFUNCTION()
    void GrabMotion();
    
    UFUNCTION()
    void GrabBones();
    
};

