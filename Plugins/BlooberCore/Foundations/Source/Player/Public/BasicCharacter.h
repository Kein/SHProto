#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasicCharacter.generated.h"

class UBasicCharacterMovementComponent;
class UBasicInputComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PLAYER_API ABasicCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USpringArmComponent* CameraRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* Camera;
    
public:
    ABasicCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UBasicCharacterMovementComponent* GetBasicMovement();
    
    UFUNCTION(BlueprintPure)
    UBasicInputComponent* GetBasicInput();
    
};

