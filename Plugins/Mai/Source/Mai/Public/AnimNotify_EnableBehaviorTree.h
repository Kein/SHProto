#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EnableBehaviorTree.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_EnableBehaviorTree : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName _Reason;
    
public:
    UAnimNotify_EnableBehaviorTree();

};

