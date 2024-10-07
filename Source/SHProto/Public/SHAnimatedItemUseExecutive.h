#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "PlayAnimationData.h"
#include "SHItemUseExecutive.h"
#include "SHAnimatedItemUseExecutive.generated.h"

class UAnimMontage;
class USHAnimMontagePlayer;

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHAnimatedItemUseExecutive : public USHItemUseExecutive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayAnimationData AnimationToPlay;
    
    UPROPERTY(Transient)
    USHAnimMontagePlayer* AnimPlayer;
    
public:
    USHAnimatedItemUseExecutive();

protected:
    UFUNCTION()
    void ProcessAnimationEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
};

