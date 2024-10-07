#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_LockPhysicsRotation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API UAnimNotify_LockPhysicsRotation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLockRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LockType;
    
    UAnimNotify_LockPhysicsRotation();

};

