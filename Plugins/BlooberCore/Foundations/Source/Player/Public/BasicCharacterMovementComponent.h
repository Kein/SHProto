#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BasicCharacterMovementComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYER_API UBasicCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementInputScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationInputDeltaScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationInputDeltaScaleOverTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationInputScaleSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationInputScaleSpeedOverTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LimitScaleRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxScaleRotationSpeed;
    
public:
    UBasicCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

