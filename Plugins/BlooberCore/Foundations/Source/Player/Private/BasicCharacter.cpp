#include "BasicCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "BasicCharacterMovementComponent.h"

ABasicCharacter::ABasicCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBasicCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->CameraRoot = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraRoot"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->Camera->SetupAttachment(CameraRoot);
    this->CameraRoot->SetupAttachment(RootComponent);
}

UBasicCharacterMovementComponent* ABasicCharacter::GetBasicMovement() {
    return NULL;
}

UBasicInputComponent* ABasicCharacter::GetBasicInput() {
    return NULL;
}


