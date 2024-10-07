#pragma once
#include "CoreMinimal.h"
#include "SHElevatorEngine.h"
#include "SHFragileElevatorEngine.generated.h"

UCLASS()
class ASHFragileElevatorEngine : public ASHElevatorEngine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    bool bIsMovementBroken;
    
    UPROPERTY(SaveGame)
    int32 TargetFloorOnBroken;
    
    UPROPERTY(SaveGame)
    float MovementAlphaOnBroken;
    
    UPROPERTY(SaveGame)
    bool bIsDoorBroken;
    
    UPROPERTY(SaveGame)
    float DoorAlphaOnBroken;
    
public:
    ASHFragileElevatorEngine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestBreakMovement();
    
    UFUNCTION(BlueprintCallable)
    void RequestBreakDoorAt(float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void RequestBreakDoor();
    
};

