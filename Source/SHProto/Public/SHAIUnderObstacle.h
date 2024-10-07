#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnderEventDelegate.h"
#include "SHAIUnderObstacle.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHAIUnderObstacle : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UCapsuleComponent*> _OwnerCapsules;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AActor*> _UnderObstacles;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AActor*> _ExitObstacles;
    
    UPROPERTY(BlueprintAssignable)
    FUnderEvent OnEnterObstacle;
    
    UPROPERTY(BlueprintAssignable)
    FUnderEvent OnExitObstacle;
    
    USHAIUnderObstacle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnActorEndOvelap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintPure)
    bool IsUnderAnyObstacle() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitAllObstacles();
    
    UFUNCTION(BlueprintCallable)
    void EnterUnderObctacle(AActor* obstacle);
    
    UFUNCTION(BlueprintCallable)
    void ConditionalExitUnderObstacle(AActor* obstacle);
    
};

