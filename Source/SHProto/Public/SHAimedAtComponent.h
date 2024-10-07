#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAimedAtComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAimedAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAimedAtEvent);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAlloweedToBeShoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bCanTickWhileNotBeingAimedAt;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAimedAtEvent OnAimStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAimedAtEvent OnAimEnded;
    
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> AimingActor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> AimedWithActor;
    
public:
    USHAimedAtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBeingAimedAt(AActor* InAimingActor, AActor* InAimedWithActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetAimedAtDuration();
    
    UFUNCTION(BlueprintPure)
    bool IsBeingAimedAt() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlloweedToBeShoot() const;
    
    UFUNCTION(BlueprintPure)
    float GetBeingAimedAtDuration() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAimingActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAimedWithActor() const;
    
    UFUNCTION(BlueprintCallable)
    void EndBeingAimedAt(AActor* InAimingActor);
    
};

