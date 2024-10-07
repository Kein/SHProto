#pragma once
#include "CoreMinimal.h"
#include "ReviveAnimationData.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimReviveSubcomp.generated.h"

class UAnimSequenceBase;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimReviveSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    USHAnimReviveSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetActorOnBodyPosition(FReviveAnimationData ReviveData);
    
    UFUNCTION(BlueprintPure)
    FReviveAnimationData GetReviveData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetReviveAnimationFromBodyPose() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequenceBase* GetReviveAnimation() const;
    
};

