#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaiAction_PlayAnimation.h"
#include "Templates/SubclassOf.h"
#include "MaiAction_ExtMovementAnimation.generated.h"

class AActor;
class AMaiNavLink;
class UMaiAction_ExtMovementAnimation;
class UMaiAttack;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_ExtMovementAnimation : public UMaiAction_PlayAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    AMaiNavLink* _NavLink;
    
    UPROPERTY(VisibleInstanceOnly)
    bool _StartInA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _LeftMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RightMargin;
    
    UPROPERTY()
    UMaiAttack* _Attack;
    
    UPROPERTY()
    AActor* _Enemy;
    
public:
    UMaiAction_ExtMovementAnimation();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_ExtMovementAnimation* createActionExtMovementAnimation(UObject* WorldContextObject, FGameplayTagContainer animTags, AMaiNavLink* NavLink, bool startSide, TSubclassOf<UMaiAction_ExtMovementAnimation> ActionClass);
    
};

