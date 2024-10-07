#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EItemInteractionType.h"
#include "ItemInvestigationAnimationData.h"
#include "ItemQuickGrabAnimationData.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimItemInteractionSubcomp.generated.h"

class ASHItemBase;
class USHItemInteractionAnimInstance;
class USHWeaponManageCmbSubcomp;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimItemInteractionSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    EItemInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadOnly)
    FVector InvestigationItemLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ReachHandLocation;
    
    UPROPERTY(BlueprintReadOnly)
    int32 InvestigationFlipSide;
    
    UPROPERTY(BlueprintReadOnly)
    FItemInvestigationAnimationData ItemInvestigationAnimationsData;
    
    UPROPERTY(BlueprintReadOnly)
    FItemQuickGrabAnimationData ItemQuickGrabAnimationsData;
    
    UPROPERTY(Transient)
    USHItemInteractionAnimInstance* ItemInteractionAnimInstance;
    
    UPROPERTY(Transient)
    ASHItemBase* InvestigationItem;
    
    UPROPERTY(Transient)
    USHWeaponManageCmbSubcomp* WeaponManageSubcomp;
    
public:
    USHAnimItemInteractionSubcomp();

    UFUNCTION(BlueprintCallable)
    void TakeItemSetDirection(bool bSetProperHand);
    
    UFUNCTION(BlueprintCallable)
    void TakeItemAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayPreInvestigationAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InvestigationSetHandLocationFAB();
    
    UFUNCTION(BlueprintCallable)
    void HandlePreInvestigationAnimEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandlePostInvestigationAnimEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleInvestigationSetupAnimEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleInvestigationFlipAnimEndNotify(float AnimationTime, int32 FlipSide);
    
    UFUNCTION(BlueprintCallable)
    void HandleInvestigationFinishAnimEndEvent();
    
};

