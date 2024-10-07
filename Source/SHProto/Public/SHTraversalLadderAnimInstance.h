#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ESHDetectionSide.h"
#include "SHTraversalLadderAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(NonTransient)
class SHPROTO_API USHTraversalLadderAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasLadderEvenNumberOfSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESHDetectionSide CharacterTraversalSide;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayStartTraversal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayEndTraversal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CurrentInputValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* EndAnimAbove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* EndAnimBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* StartAnimAbove_OddNumberOfSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* StartAnimAbove_EvenNumberOfSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* StartAnimBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D CharacterViewRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StepDelta;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D TraversalPathOffsetRelativeToSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AboveFloorRelativeToStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BelowFloorRelativeToStep;
    
public:
    USHTraversalLadderAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastEndOfTraversalStart();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastEndOfTraversalFinish();
    
};

