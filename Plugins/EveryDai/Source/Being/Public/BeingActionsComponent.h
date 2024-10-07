#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Components/ActorComponent.h"
#include "BeingActions.h"
#include "EBeingActionEventType.h"
#include "Templates/SubclassOf.h"
#include "BeingActionsComponent.generated.h"

class UBeingAction;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FBeingActions _Actions;
    
    UPROPERTY(Transient)
    UBeingAction* _CurrentAction;
    
public:
    UBeingActionsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnCurrentActionEvent(UBeingAction* action, EBeingActionEventType EventType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActionActive(TSubclassOf<UBeingAction> ActionClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyAction() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAction(TSubclassOf<UBeingAction> ActionClass) const;
    
    UFUNCTION(BlueprintPure)
    UBeingAction* GetCurrentAction() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllActions();
    
    UFUNCTION(BlueprintCallable)
    bool AddAction(UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    int32 AbortActionsInstigatedBy(const UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    int32 AbortActionsByPriority(TEnumAsByte<EAIRequestPriority::Type> Priority, bool exact);
    
    UFUNCTION(BlueprintCallable)
    int32 AbortActionsByClass(TSubclassOf<UBeingAction> ActionClass, bool exact);
    
};

