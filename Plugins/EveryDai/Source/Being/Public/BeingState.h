#pragma once
#include "CoreMinimal.h"
#include "GraphObject.h"
#include "BeingStates.h"
#include "EStateStatus.h"
#include "StateStatusChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "BeingState.generated.h"

class AActor;
class UBeingState;
class UBeingStatesComponent;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BEING_API UBeingState : public UGraphObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    EStateStatus _Status;
    
    UPROPERTY(EditAnywhere)
    FBeingStates _SubStates;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    int32 _CurrSubState;
    
    UPROPERTY()
    AActor* _Owner;
    
    UPROPERTY(Instanced)
    UBeingStatesComponent* _StateMachine;
    
    UPROPERTY(EditAnywhere)
    bool _AutoActivate;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    bool _NeedDeactivate;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _LifeTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _CooldownTimer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _TimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Cooldown;
    
    UPROPERTY(BlueprintAssignable)
    FStateStatusChanged StatusChanged;
    
    UBeingState();

    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUnregister();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRegister();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExit(EStateStatus Status);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEnter();
    
    UFUNCTION(BlueprintCallable)
    bool ProcessSubStates(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMeetConditionsScript() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubStateNum() const;
    
    UFUNCTION(BlueprintPure)
    UBeingState* GetSubState(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    EStateStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    UBeingStatesComponent* GetStatesComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetRuntimeInfoScript() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishState(EStateStatus Status);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBeingState* createState(UObject* WorldContextObject, TSubclassOf<UBeingState> Class);
    
    UFUNCTION(BlueprintCallable)
    void ConditionalActivateState();
    
    UFUNCTION(BlueprintCallable)
    void ActivateState();
    
};

