#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "BasicInputComponent.generated.h"

class UBInputCursor;
class UBInputMovement;
class UBInputRotation;

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYER_API UBasicInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UBInputMovement* Movement;
    
    UPROPERTY(Instanced, Transient)
    UBInputRotation* Rotation;
    
    UPROPERTY(Instanced, Transient)
    UBInputCursor* Cursor;
    
public:
    UBasicInputComponent(const FObjectInitializer& ObjectInitializer);

};

