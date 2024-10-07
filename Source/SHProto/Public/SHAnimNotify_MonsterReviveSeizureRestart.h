#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_MonsterReviveSeizureRestart.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_MonsterReviveSeizureRestart : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName SeizuresFinishSection;
    
    UPROPERTY(EditAnywhere)
    float ReduceSeizuresCountBy;
    
public:
    USHAnimNotify_MonsterReviveSeizureRestart();

};

