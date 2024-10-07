#pragma once
#include "CoreMinimal.h"
#include "BeingAction.h"
#include "MaiActionFinishedDelegate.h"
#include "MaiAction.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAI_API UMaiAction : public UBeingAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _ActionName;
    
    UPROPERTY(EditAnywhere)
    bool _SetBehaviorName;
    
    UPROPERTY(BlueprintAssignable)
    FMaiActionFinished OnActionFinished;
    
    UMaiAction();

    UFUNCTION(BlueprintCallable)
    void SetActionName(FName Name);
    
    UFUNCTION(BlueprintPure)
    bool IsActionFinished() const;
    
    UFUNCTION(BlueprintPure)
    FName GetActionName() const;
    
};

