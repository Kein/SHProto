#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHMovementObstacleDetection.generated.h"

class ACharacter;
class UCapsuleComponent;
class USHCharacterPlayMovementComponent;

UCLASS(BlueprintType, Within=SHCharacterPlayMovementComponent)
class SHPROTO_API USHMovementObstacleDetection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopMovementThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockSprintThreshold;
    
private:
    UPROPERTY(Instanced, Transient)
    USHCharacterPlayMovementComponent* MovementComponent;
    
    UPROPERTY(Instanced, Transient)
    UCapsuleComponent* Capsule;
    
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Transient)
    bool Initialized;
    
public:
    USHMovementObstacleDetection();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_MovementObstacleDetection_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_MovementObstacleDetection_Enabled(bool Enable);
    
    UFUNCTION(Exec)
    void SHDebug_Character_MovementObstacleDetection_DrawDebug();
    
};

