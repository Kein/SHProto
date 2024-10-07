#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHMonsterAnimInstance.h"
#include "SHMandarinAnimInstance.generated.h"

class USHMandarinAnimInstanceStateData;
class USHMandarinLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHMandarinAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool IsHanging;
    
    UPROPERTY(BlueprintReadOnly)
    float TongueTransformationAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TongueSnapLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TongueSnapRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float TongueTransformationFadeInSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float TongueTransformationFadeOutSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LookRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float LookRotationAlpha;
    
public:
    USHMandarinAnimInstance();

protected:
    UFUNCTION()
    void IncrementAlphaTongueTransformationAlpha();
    
    UFUNCTION(BlueprintPure)
    USHMandarinLocomotionAnimInstance* GetMandarinLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHMandarinAnimInstanceStateData* GetMandarinAnimInstanceStateData() const;
    
protected:
    UFUNCTION()
    void DecrementAlphaTongueTransformationAlpha();
    
};

