#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CutsceneCharacterAnimInstance.generated.h"

UCLASS(NonTransient)
class CUTSCENES_API UCutsceneCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CutsceneFaceSlotName;
    
    UPROPERTY(BlueprintReadOnly)
    bool IgnoreInputPose;
    
    UPROPERTY(BlueprintReadOnly)
    float CutsceneAlpha;
    
public:
    UCutsceneCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnySlotAnimation(FName SlotName) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateFaceSlotAlpha() const;
    
};

