#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHTraversalClimbAnimInstance.generated.h"

class UBlendSpace;

UCLASS(NonTransient)
class SHPROTO_API USHTraversalClimbAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayStartTraversal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EdgeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeltaHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* AssignedClimbUpBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* AssignedJumpDownBlendSpace;
    
    UPROPERTY(BlueprintReadOnly)
    bool bTraversalDataSetup;
    
public:
    USHTraversalClimbAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupEventBP();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsOnLowerFloor() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastEndOfTraversal();
    
};

