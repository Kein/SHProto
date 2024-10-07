#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHDPSCounter.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHDPSCounter : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CounterHistoryDurationLimit;
    
public:
    USHDPSCounter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetDPS();
    
protected:
    UFUNCTION()
    void ProcessOwnerTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintPure)
    float GetRecentTotalDamage(float HistoryPeriodSeconds) const;
    
    UFUNCTION(BlueprintPure)
    float GetRecentDPS(float HistoryPeriodSeconds) const;
    
};

