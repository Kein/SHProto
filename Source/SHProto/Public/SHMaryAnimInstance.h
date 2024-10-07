#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHMariaBossFaceExpression.h"
#include "ESHMaryAnimInstanceMovementState.h"
#include "SHMonsterAnimInstance.h"
#include "SHMaryAnimInstance.generated.h"

class USHMaryAnimInstanceStateData;
class USHMaryLocomotionAnimInstance;
class USHMarySpiderLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHMaryAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FRotator LookRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float LookRotationAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHMaryAnimInstanceMovementState MovementState;
    
    UPROPERTY(BlueprintReadOnly)
    ESHMariaBossFaceExpression CurrentFaceExpression;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ESHMariaBossFaceExpression, FVector> FaceExpressionMap;
    
public:
    USHMaryAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetFaceExpression(const ESHMariaBossFaceExpression Expression, const float Duration);
    
public:
    UFUNCTION()
    void ResetFaceExpression();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMaryMovementStateChanged(ESHMaryAnimInstanceMovementState InMovementState);
    
    UFUNCTION(BlueprintPure)
    USHMarySpiderLocomotionAnimInstance* GetMarySpiderLocomotionAnimInstance(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    USHMaryLocomotionAnimInstance* GetMaryLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHMaryAnimInstanceStateData* GetMaryAnimInstanceStateData() const;
    
protected:
    UFUNCTION(BlueprintPure)
    USHMaryLocomotionAnimInstance* GetActiveMaryLocomotionAnimInstance() const;
    
};

