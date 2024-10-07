#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "AITypes.h"
#include "GraphObject.h"
#include "BeingActionEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BeingAction.generated.h"

class APawn;
class UBeingAction;
class UBeingActionsComponent;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BEING_API UBeingAction : public UGraphObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UBeingAction* ChildAction;
    
    UPROPERTY(Instanced, Transient)
    UBeingActionsComponent* OwnerComponent;
    
    UPROPERTY(Transient)
    UObject* Instigator;
    
public:
    UPROPERTY(BlueprintAssignable)
    FBeingActionEvent ActionStateChange;
    
    UBeingAction();

    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingAborted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBeingAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UBeingAction> ActionClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActionStart(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActionInit(APawn* ControlledPawn);
    
    // FIXME
    // UFUNCTION(BlueprintImplementableEvent)
    // void ActionFinished(const APawn* ControlledPawn, const TEnumAsByte<EPawnActionResult::Type> WithResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> Abort(bool Force);
    
};

