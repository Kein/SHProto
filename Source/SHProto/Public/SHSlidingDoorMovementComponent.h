#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHDoorMovementBaseComponent.h"
#include "SHSlidingDoorMovementComponent.generated.h"

class UCurveFloat;
class USHSlidingDoorMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSlidingDoorMovementComponent : public USHDoorMovementBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSlidingDoorMovementEventBP, USHSlidingDoorMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHSlidingDoorMovementEvent, USHSlidingDoorMovementComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeginPlayDoorMovementAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MovementDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* DefaultOpenMovementCurve;
    
    UPROPERTY(SaveGame)
    float DoorMovementAlphaSave;
    
public:
    USHSlidingDoorMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurveMovement();
    
    UFUNCTION(BlueprintCallable)
    bool RequestPlayDefaultOpenMovement();
    
    UFUNCTION(BlueprintCallable)
    bool RequestPlayCurveMovement(UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDoorAlpha(float InDoorAlpha);
    
};

