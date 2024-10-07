#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LitEventDelegate.h"
#include "SHAILitByAFlashlight.generated.h"

class AActor;
class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHAILitByAFlashlight : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _ChargingDuration;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _ChargingTime;
    
    UPROPERTY(EditAnywhere)
    float _DecayCooldown;
    
    UPROPERTY(EditAnywhere)
    float _DecaySpeed;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float _DecayTime;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _IsFullyLit;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _AngleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _RangeCurve;
    
    UPROPERTY(BlueprintAssignable)
    FLitEvent OnLightEnter;
    
    UPROPERTY(BlueprintAssignable)
    FLitEvent OnLightExit;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float _AngleAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float _RangeAlpha;
    
public:
    USHAILitByAFlashlight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    static bool isPointLitByAFlashlight(AActor* Owner, FVector Point, float& angleAlpha, float& rangeAlpha);
    
    UFUNCTION(BlueprintPure)
    bool IsLitByAFlashlight();
    
    UFUNCTION(BlueprintPure)
    bool IsFullyLit() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugPrint();
    
};

