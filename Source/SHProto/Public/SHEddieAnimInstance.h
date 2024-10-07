#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHEddieAnimInstanceMovementState.h"
#include "ESHEddieFaceExpression.h"
#include "SHMonsterAnimInstance.h"
#include "SHEddieAnimInstance.generated.h"

class USHEddieAnimInstanceStateData;
class USHEddieLimpingLocomotionAnimInstance;
class USHEddieLocomotionAnimInstance;
class USHEddieWalkingLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHEddieAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHEddieAnimInstanceMovementState MovementState;
    
    UPROPERTY(BlueprintReadOnly)
    ESHEddieFaceExpression CurrentFaceExpression;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ESHEddieFaceExpression, FVector> FaceExpressionMap;
    
public:
    USHEddieAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetFaceExpression(const ESHEddieFaceExpression Expression, const float Duration);
    
    UFUNCTION()
    void ResetFaceExpression();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEddieMovementStateChanged(ESHEddieAnimInstanceMovementState InMovementState);
    
    UFUNCTION(BlueprintPure)
    USHEddieWalkingLocomotionAnimInstance* GetEddieWalkingLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    USHEddieLimpingLocomotionAnimInstance* GetEddieLimpingLocomotionAnimInstance() const;
    
public:
    UFUNCTION(BlueprintPure)
    USHEddieAnimInstanceStateData* GetEddieAnimInstanceStateData() const;
    
protected:
    UFUNCTION(BlueprintPure)
    USHEddieLocomotionAnimInstance* GetActiveEddieLocomotionAnimInstance() const;
    
};

