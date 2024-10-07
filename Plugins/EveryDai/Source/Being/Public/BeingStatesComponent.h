#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BeingStates.h"
#include "StateFinishedDelegate.h"
#include "StateStartedDelegate.h"
#include "Templates/SubclassOf.h"
#include "BeingStatesComponent.generated.h"

class UBeingState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingStatesComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBeingStates _States;
    
    UPROPERTY()
    TArray<UBeingState*> _StatesCache;
    
public:
    UPROPERTY(BlueprintAssignable)
    FStateStarted StateStarted;
    
    UPROPERTY(BlueprintAssignable)
    FStateFinished StateFinished;
    
    UBeingStatesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveStatesByClass(TSubclassOf<UBeingState> stateClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(UBeingState* State);
    
    UFUNCTION(BlueprintPure)
    bool IsStateActive(TSubclassOf<UBeingState> stateClass) const;
    
    UFUNCTION(BlueprintCallable)
    UBeingState* GetStateByClass(TSubclassOf<UBeingState> stateClass);
    
    UFUNCTION(BlueprintPure)
    TArray<UBeingState*> FindStatesByClass(TSubclassOf<UBeingState> stateClass) const;
    
    UFUNCTION(BlueprintPure)
    UBeingState* FindStateByName(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    UBeingState* FindStateByClass(TSubclassOf<UBeingState> stateClass) const;
    
    UFUNCTION(BlueprintCallable)
    UBeingState* AddStateByClass(TSubclassOf<UBeingState> stateClass);
    
    UFUNCTION(BlueprintCallable)
    void AddState(UBeingState* State, bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void ActivateStateByClass(TSubclassOf<UBeingState> stateClass);
    
    UFUNCTION(BlueprintCallable)
    void AbortStateByClass(TSubclassOf<UBeingState> stateClass);
    
};

