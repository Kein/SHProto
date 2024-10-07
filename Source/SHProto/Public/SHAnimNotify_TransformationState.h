#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_TransformationState.generated.h"

class USHEnemyTransformationState;

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_TransformationState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USHEnemyTransformationState* TransformationState;
    
    UPROPERTY(EditAnywhere)
    float OverrideDuration;
    
    UPROPERTY(EditAnywhere)
    float OverrideHitReactionsChangeDelay;
    
    UPROPERTY(EditAnywhere)
    float OverrideLyingTransformationDelay;
    
    UPROPERTY(EditAnywhere)
    float OverrideLyingTransformationDuration;
    
public:
    USHAnimNotify_TransformationState();

};

